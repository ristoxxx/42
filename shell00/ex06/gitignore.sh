cd "$(git rev-parse --show-toplevel)"
find . -name .gitignore -exec cat {} \;
