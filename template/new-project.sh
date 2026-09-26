#!/usr/bin/env bash
# Scaffold a new C project from template/c-macos-cursor.
set -euo pipefail

usage() {
  echo "Usage: $0 <destination-dir>"
  echo "Example: $0 ~/Desktop/Code/my-project"
  exit 1
}

[[ $# -eq 1 ]] || usage

DEST="$1"
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SRC="${SCRIPT_DIR}/c-macos-cursor"

if [[ -e "$DEST" ]]; then
  echo "Error: destination already exists: $DEST" >&2
  exit 1
fi

mkdir -p "$(dirname "$DEST")"
cp -R "$SRC" "$DEST"

# Drop macOS AppleDouble / resource-fork noise if any
find "$DEST" -name '._*' -delete 2>/dev/null || true

PROJECT_NAME="$(basename "$DEST")"
if [[ -f "$DEST/README.md" ]]; then
  # macOS sed needs '' for -i; GNU sed does not — try both styles
  if sed --version >/dev/null 2>&1; then
    sed -i "s/PROJECT_NAME/${PROJECT_NAME}/g" "$DEST/README.md"
  else
    sed -i '' "s/PROJECT_NAME/${PROJECT_NAME}/g" "$DEST/README.md"
  fi
fi

echo "Created project at: $DEST"
echo "Next:"
echo "  cd \"$DEST\""
echo "  make && make run"
echo "  # Open the folder in Cursor, install recommended extensions, press F5 to debug"
