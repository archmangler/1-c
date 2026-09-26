# C development environment (Cursor)

macOS C setup for Cursor: Clang, Make, and LLDB debugging.

## Toolchain

Prefer **Clang + LLDB**. `/usr/bin/gcc` is typically Apple Clang.

| Tool | Command | Notes |
|------|---------|-------|
| Compiler | `gcc` / `clang` | Apple Clang via Xcode Command Line Tools |
| Debugger | `lldb` | Use instead of GDB on macOS |
| Build | `make` | See `Makefile` |

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

Optional GNU GCC:

```bash
brew install gcc
```

## Cursor extensions

Install from Extensions (`Cmd+Shift+X`), or accept the workspace recommendations:

| Extension | ID | Purpose |
|-----------|-----|---------|
| Anysphere C/C++ | `anysphere.cpptools` | Cursor-supported C/C++ support |
| CodeLLDB | `vadimcn.vscode-lldb` | LLDB debugging (`F5`) |
| Makefile Tools | `ms-vscode.makefile-tools` | Optional Makefile integration |

Prefer Anysphere’s C/C++ extension over Microsoft’s C/C++ Extension Pack in Cursor.

## Project layout

```
.
├── main.c
├── Makefile              # -g -O0; builds all *.c in this directory
├── compile_flags.txt     # clangd / IntelliSense hints
├── .gitignore
├── .vscode/
│   ├── tasks.json        # Cmd+Shift+B → make
│   ├── launch.json       # F5 → Debug main (LLDB)
│   ├── settings.json
│   └── extensions.json   # recommended extensions
└── SETUP.md
```

### Makefile

- `make` / `make all` — compile all `*.c` → `main`
- `make run` — build and run
- `make clean` — remove binary, objects, and `.dSYM`

Flags: `-Wall -Wextra -std=c11 -g -O0`

### IDE configs

- **`.vscode/tasks.json`** — default build task runs `make`
- **`.vscode/launch.json`** — “Debug main” runs `./main` under LLDB after `make`

## Daily workflow

1. Open this folder in Cursor.
2. **Build:** `Cmd+Shift+B` or `make`
3. **Run:** `make run` or `./main`
4. **Debug:** set a breakpoint, press `F5`

### Breakpoints

1. Open a `.c` file.
2. Click the gutter left of a line number, or press `F9`.
3. Press `F5`.

| Key | Action |
|-----|--------|
| `F5` | Continue / start |
| `F10` | Step over |
| `F11` | Step into |
| `Shift+F11` | Step out |
| `F9` | Toggle breakpoint |

## IntelliSense

`compile_flags.txt` supplies flags for clangd on small projects. Larger trees usually use `compile_commands.json` (e.g. from CMake).

## Troubleshooting

- **`Configured debug type 'lldb' is not supported`** — install CodeLLDB (`vadimcn.vscode-lldb`).
- **Breakpoints ignored** — ensure `CFLAGS` has `-g`, then `make clean && make`.
- **Missing `_main`** — save source files; confirm `main.c` is non-empty on disk.
- **IntelliSense conflicts** — prefer Anysphere C/C++ and/or clangd over Microsoft’s pack.
