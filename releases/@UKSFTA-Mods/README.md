# UKSF Taskforce Alpha - Mod Collection

Core functional modifications and gameplay improvements for UKSFTA.

## 🛠 Development Workflow

This project uses the centralized **UKSFTA-Tools** for all automation.

- **Manage Dependencies**: Edit `mod_sources.txt` and run `python3 tools/manage_mods.py`.
- **Create Release**: Run `python3 tools/release.py` to build with HEMTT and deploy to Workshop/GitHub.

## 📦 Requirements

- [HEMTT](https://github.com/vurtual/hemtt)
- SteamCMD (for Workshop syncing)
- GPG (for commit and release signing)
