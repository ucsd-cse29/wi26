#!/bin/bash

paths=(~/MailArchive/Pokemon/*)
path=${paths[RANDOM % ${#paths[@]}]}

files=( "$path"/*.pk )
random_file="${files[RANDOM % ${#files[@]}]}"
name="${random_file##*/}"
name="${name%.pk}"
name="${name%_*}"

echo "$name's Pokemon!"
cat "$random_file"