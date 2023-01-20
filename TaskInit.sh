#!/bin/bash

#
# Copyright (C) 2023 FourtyThree43 (0x43)  <https://github.com/FourtyThree43>
# LICENSE © GNU-GPL3
#

# a simple script to Initialize your ALX tasks #

## ------------ COLORS ------------ ##

# Reset #
Color_Off='\033[0m' # Text Reset

# Regular Colors #
Black='\033[0;30m'  Red='\033[0;31m'     Green='\033[0;32m'  Yellow='\033[0;33m'
Blue='\033[0;34m'   Purple='\033[0;35m'  Cyan='\033[0;36m'   White='\033[0;37m'

# Bold #
BBlack='\033[1;30m' BRed='\033[1;31m'    BGreen='\033[1;32m' BYellow='\033[1;33m'
BBlue='\033[1;34m'  BPurple='\033[1;35m' BCyan='\033[1;36m'  BWhite='\033[1;37m'

# Underline #
UBlack='\033[4;30m' URed='\033[4;31m'    UGreen='\033[4;32m' UYellow='\033[4;33m'
UBlue='\033[4;34m'  UPurple='\033[4;35m' UCyan='\033[4;36m'  UWhite='\033[4;37m'

# Background #
On_Black='\033[40m' On_Red='\033[41m'    On_Green='\033[42m' On_Yellow='\033[43m'
On_Blue='\033[44m'  On_Purple='\033[45m' On_Cyan='\033[46m'  On_White='\033[47m'

echo ""
echo -e "${BPurple}####################################${Color_Off}"
echo -e "${Red}#      Task Initialize Script      #${Color_Off}"
echo -e "${BPurple}####################################${Color_Off}"

# Prompt user for folder name
echo -e "${BYellow}Enter the folder name: ${Color_Off}"
read folder_name

# Create new folder
mkdir "$folder_name"

# Change to new folder
cd "$folder_name"

# Get current and parent folder names
current_folder=$(basename "$PWD")
parent_folder=$(basename "$(dirname "$PWD")")

# Create README.md file with parent folder name on first line and current folder name on second line
echo "# $parent_folder" > README.md
echo "$current_folder" >> README.md

# Print the output.
echo ""
pwd

echo ""
ls -a

echo ""
cat README.md

# D O N E! #
echo -e "\n${BGreen}[✔] D O N E !\n${Color_Off}"

