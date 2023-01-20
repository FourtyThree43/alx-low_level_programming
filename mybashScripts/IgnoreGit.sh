#!/bin/bash


echo "Please enter the number of entries you wish to record: "
read num_entries

# Create the .gitignore file
touch .gitignore

# Start the while loop
counter=0
while [ $counter -lt $num_entries ]; do
    echo "Please enter pattern #$(($counter+1)): "
    read input_value
    echo $input_value >> .gitignore
    counter=$(($counter+1))
done
