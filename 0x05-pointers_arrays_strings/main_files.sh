#!/bin/bash

# create the destination directory
mkdir -p main_files

# find all files with "main.c" in their name
files=$(find . -type f -name "*main.c*")

# loop through the files and move them to the destination directory
for file in $files
do
    mv "$file" main_files/
done

