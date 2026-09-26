# C development environment (Cursor)

How this repo is set up for C development on macOS with Cursor: compiler, debugger, Makefile, and IDE debug configs.

## Toolchain

On macOS, prefer **Clang + LLDB**. `/usr/bin/gcc` is typically Apple Clang.

| Tool | Command / path | Notes |
|------|----------------|-------|
| Compiler | `gcc` / `clang` | Apple Clang via Xcode Command Line Tools |
| Debugger | `lldb` | Native macOS debugger; use this instead of GDB |
| Build | `make` | See `Makefile` |

Check your tools:

```bash
gcc --version
clang --version
lldb --version
xcode-select -p
```

If tools are missing:

```bash
xcode-select --install
```

Optional real GNU GCC via Homebrew:

```bash
brew install gcc
```

GDB is not required on macOS and is often awkward to install/sign. This project uses **LLDB**.

## Cursor extensions

Install from Extensions (`Cmd+Shift+X`):

| Extension | ID | Purpose |
|-----------|-----|---------|
| Anysphere C/C++ | `anysphere.cpptools` | Cursor-supported C/C++ language support |
| CodeLLDB | `vadimcn.vscode-lldb` | LLDB debugging (`F5`) |
| Makefile Tools | `ms-vscode.makefile-tools` | Optional Makefile integration |

Prefer Anysphere’s C/C++ extension over Microsoft’s C/C++ Extension Pack in Cursor.

## Project layout

```
.
├── main.c                 # Source
├── Makefile               # Build (debug flags: -g -O0)
├── .vscode/
│   ├── tasks.json         # Build task → make
│   └── launch.json        # Debug config → LLDB
└── SETUP.md               # This file
```

### Makefile

- `make` / `make all` — compile `main.c` → `main`
- `make run` — build and run
- `make clean` — remove the binary

Flags: `-Wall -Wextra -std=c11 -g -O0` (warnings, C11, debug symbols, no optimization).

### VS Code / Cursor configs

- **`.vscode/tasks.json`** — default build task runs `make`
- **`.vscode/launch.json`** — “Debug main” launches `./main` with LLDB and runs `make` first (`preLaunchTask`)

## Daily workflow

1. Open this folder in Cursor.
2. **Build:** `Cmd+Shift+B`, or run `make` in the terminal.
3. **Run:** `make run`, or execute `./main`.
4. **Debug:** set a breakpoint, then press `F5` (choose “Debug main” if prompted).

### Breakpoints

1. Open `main.c`.
2. Click the gutter left of a line number (red dot), or press `F9` on that line.
3. Press `F5` to start debugging.

While paused:

| Key | Action |
|-----|--------|
| `F5` | Continue |
| `F10` | Step over |
| `F11` | Step into |
| `Shift+F11` | Step out |
| `F9` | Toggle breakpoint |

Click the red dot again (or `F9`) to remove a breakpoint.

## IntelliSense (optional)

For a single-file project, you can add a `compile_flags.txt` at the repo root for clangd:

```
-Wall
-Wextra
-std=c11
```

Larger projects usually generate `compile_commands.json` (e.g. via CMake).

## Troubleshooting

- **`Configured debug type 'lldb' is not supported`** — install the **CodeLLDB** extension (`vadimcn.vscode-lldb`).
- **No debug symbols / can’t stop on breakpoints** — ensure `CFLAGS` includes `-g`, then `make clean && make`.
- **Build fails with missing `_main`** — confirm `main.c` is saved and non-empty on disk.
- **Microsoft vs Anysphere IntelliSense conflicts** — disable or uninstall Microsoft’s C/C++ pack; keep Anysphere C/C++ and/or clangd.
