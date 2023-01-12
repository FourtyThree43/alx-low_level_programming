#!/bin/bash

# Prompt user for folder name
read -p "Enter the folder name: " folder_name

# Create new folder
mkdir "$folder_name"

# Change to new folder
cd "$folder_name"

# Get current and parent folder names
current_folder=$(basename "$PWD")
parent_folder=$(basename "$(dirname "$PWD")")

# Create README.md file with parent folder name on first line and current folder name on second line
echo "$parent_folder" > README.md
echo "$current_folder" >> README.md

echo "Task Initialized!"
