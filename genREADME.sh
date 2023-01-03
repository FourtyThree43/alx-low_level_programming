#!/bin/bash

# Ask the user for the project name
echo "Enter the name of your project: "
read project_name

# Ask the user for a short description of the project
echo "Enter a short description of your project: "
read project_description

# Create the README file
touch README.md

# Add the project name and description to the README file
echo "# $project_name" >> README.md
echo "$project_description" >> README.md

# Add a section for installation instructions
echo "## Installation" >> README.md
echo "TODO: Add installation instructions" >> README.md

# Add a section for usage instructions
echo "## Usage" >> README.md
echo "TODO: Add usage instructions" >> README.md

# Add a section for contribution guidelines
echo "## Contributions" >> README.md
echo "TODO: Add contribution guidelines" >> README.md

# Add a section for license information
echo "## License" >> README.md
echo "TODO: Add license information" >> README.md
