# C project templates

Reusable Cursor + macOS C scaffolding derived from this repo’s setup (Makefile, LLDB debug, CodeLLDB).

## Quick start

From the repo root:

```bash
./template/new-project.sh ~/Desktop/Code/my-project
```

Then open the new folder in Cursor and follow `SETUP.md` inside it.

## What’s included

```
template/
├── README.md                 # This file
├── new-project.sh            # Scaffold a new project from the template
└── c-macos-cursor/           # Project skeleton
    ├── Makefile
    ├── main.c
    ├── compile_flags.txt
    ├── .gitignore
    ├── README.md
    ├── SETUP.md
    └── .vscode/
        ├── tasks.json
        ├── launch.json
        ├── settings.json
        └── extensions.json
```

## Manual copy

```bash
cp -R template/c-macos-cursor /path/to/my-project
cd /path/to/my-project
make && make run
```
