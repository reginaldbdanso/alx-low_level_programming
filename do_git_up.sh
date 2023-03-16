#!/bin/bash

# Check if commit message argument is passed
if [ -z "$1" ]
  then
    echo "Please provide a commit message as argument"
    exit 1
fi

# Add all files
git add .

# Commit changes with the provided commit message
git commit -m "$1"

# Push changes to remote repository
git push
