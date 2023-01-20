#!/bin/bash
#
# Copyright (C) 2023 FourtyThree43 (0x43)  <https://github.com/FourtyThree43>
# LICENSE © GNU-GPL3
#

# a simple script to Ipush your commits to GitHub #

## ------------ COLORS ------------ ##

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
echo -e "${BCyan}#############################${Color_Off}"
echo -e "${BCyan}#      Git Push Script      #${Color_Off}"
echo -e "${BCyan}#############################${Color_Off}"

while true; do
  # get branch name (e.g master, main, etc... ) #
  Branch=$(git branch --show-current)

  echo -e "\n${BRed}[*] Your Current Branch : ${BYellow}${Branch}${Color_Off}"

  # Get the commit message from the user
    echo ""
    echo -e "${BPurple}##################################${Color_Off}"
    echo -e "${BGreen}# Write your commit comment! :-  #${Color_Off}"
    read message

	# Prompt the user for the name of the file to add
  # echo "Enter the name of the file to add:"
  # read filename

  # Check if the file exists in the current directory
  # if ls | grep -q "$filename"; then

  # If the message is blank, use "Task Added" as the message
  if [ -z "$message" ]; then
    message="Task Added"
  fi

  # Get the current timestamp in seconds since the epoch
  timestamp=$(date +%s)

  # Format the timestamp as a string
  timestamp_str=$(printf "%s" "$timestamp")

  # Add the timestamp to the commit message
  message="$message - Timestamp: $timestamp_str"

  # Add all changes to the Git staging area
  git add ./

  # Add the specified file to the Git staging area
  # git add "$filename"

  # Commit the changes with the specified message
  git commit -m "$message"

  # push to repo #
  echo ""
  git push -u origin $Branch

  # D O N E! #
  echo -e "\n${BGreen}[✔] D O N E \n${Color_Off}"

  # Exit the loop
  break
done
