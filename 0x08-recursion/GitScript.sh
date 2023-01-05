#!/bin/bash

while true; do
  # Get the commit message from the user
  echo "Enter commit message:"
  read message

  # If the message is blank, use "Task Added" as the message
  if [ -z "$message" ]; then
    message="Task Added"
  fi

  # Add all changes to the Git staging area
  git add ./

  # Commit the changes with the specified message
  git commit -m "$message"

  # Push the commit to the origin remote and master branch
  git push

  # Exit the loop
  break
done
