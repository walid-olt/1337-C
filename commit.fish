#!/usr/bin/env fish

set -l last_file (git diff --cached --name-only | xargs ls -t 2>/dev/null | head -n 1)

if test -n "$last_file"
    set -l file_name (basename "$last_file")
    echo "Running norminette : $file_name"

    if norminette "$last_file"
        git add -v "$last_file"
        git commit -m "$file_name"
        git push
    else
        exit 1
    end
else
    echo "No staged files found."
end
