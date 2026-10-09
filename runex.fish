#!/usr/bin/env fish

if test (count $argv) -eq 0
    echo "Usage: ./runex.fish <directory>"
    exit 1
end

set dir (string trim -r -c / "$argv[1]")/

if not test -d "$dir"
    echo "Error: Directory '$dir' does not exist."
    exit 1
end

echo "========================================"
echo "Testing: $dir"
echo "========================================"

gcc "$dir"*.c -Wall -Wextra -Werror -o "$dir/exec" 2>"$dir/error.log"

if test $status -eq 0
    "$dir/exec"
    rm "$dir/exec"
    rm -f "$dir/error.log"
else
    echo "❌ Compilation Failed!"
    cat "$dir/error.log"
    rm -f "$dir/error.log"
end
