#!/usr/bin/env bash

# Seleciona o arquivo usando fzf
selected_file=$(ls *.c 2>/dev/null | fzf --prompt="Escolha o arquivo .c: " --height=40% --reverse)

if [ -n "$selected_file" ]; then
    output="${selected_file%.c}"
    gcc "$selected_file" -o "$output" -Wall -Wextra && ./"$output"
fi
