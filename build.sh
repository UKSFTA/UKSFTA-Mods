#!/bin/bash
PROJECT_ROOT=$(pwd)
export SOURCE_DATE_EPOCH=$(date +%s)

IS_RELEASE=false
if [[ " $* " == *" release "* ]]; then
    IS_RELEASE=true
fi

if [ "$IS_RELEASE" = true ]; then
    CLEAN_ARGS=$(echo "$@" | sed 's/release//g')
    hemtt release --no-archive $CLEAN_ARGS
else
    hemtt "$@"
fi
STATUS=$?

if [ $STATUS -eq 0 ]; then
    if [ -f "tools/fix_timestamps.py" ]; then
        python3 tools/fix_timestamps.py .hemttout
    fi

    if [ "$IS_RELEASE" = true ]; then
        echo "Manually packaging ZIP..."
        mkdir -p releases
        PREFIX=$(grep "prefix =" .hemtt/project.toml | head -n 1 | cut -d'"' -f2 | tr -d '\n\r ')
        MAJOR=$(grep "#define MAJOR" addons/main/script_version.hpp | awk '{print $3}' | tr -d '\n\r ')
        MINOR=$(grep "#define MINOR" addons/main/script_version.hpp | awk '{print $3}' | tr -d '\n\r ')
        PATCH=$(grep "#define PATCHLVL" addons/main/script_version.hpp | awk '{print $3}' | tr -d '\n\r ')
        
        ZIP_PATH="$PROJECT_ROOT/releases/uksf task force alpha - ${PREFIX,,}_${MAJOR}.${MINOR}.${PATCH}.zip"
        
        # Explicit ZIP using absolute paths
        cd .hemttout/release
        zip -r "$ZIP_PATH" .
        cd "$PROJECT_ROOT"
        
        cp "$ZIP_PATH" "releases/${PREFIX}-latest.zip"
        python3 tools/fix_timestamps.py releases
    fi
fi
exit $STATUS
