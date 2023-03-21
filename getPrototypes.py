#!/usr/bin/python3
import os
import subprocess
import shutil

def is_git_repo(path):
    try:
        subprocess.check_output(["git", "rev-parse", "--is-inside-work-tree"], cwd=path)
        repo_root = subprocess.check_output(["git", "rev-parse", "--show-toplevel"], cwd=path)
        repo_root = os.path.normpath(repo_root.decode('utf-8').strip())
        return 'alx-low_level_programming'in repo_root
    except subprocess.CalledProcessError:
        return False

# List of functions to search for
functions = [
    "int _putchar(char c);",
    "int _islower(int c);",
    "int _isalpha(int c);",
    "int _abs(int n);",
    "int _isupper(int c);",
    "int _isdigit(int c);",
    "int _strlen(char *s);",
    "void _puts(char *s);",
    "char *_strcpy(char *dest, char *src);",
    "int _atoi(char *s);",
    "char *_strcat(char *dest, char *src);",
    "char *_strncat(char *dest, char *src, int n);",
    "char *_strncpy(char *dest, char *src, int n);",
    "int _strcmp(char *s1, char *s2);",
    "char *_memset(char *s, char b, unsigned int n);",
    "char *_memcpy(char *dest, char *src, unsigned int n);",
    "char *_strchr(char *s, char c);",
    "unsigned int _strspn(char *s, char *accept);",
    "char *_strpbrk(char *s, char *accept);",
    "char *_strstr(char *haystack, char *needle);"
]

while True:
    directory = os.getcwd()

    if is_git_repo(directory):
        print("You are in alx-low_level_programming repo\n{}".format(directory))

        # Directory to copy the files to
        dest_directory = os.path.join(directory, "0x18-dynamic_libraries")

        # Create the destination directory if it doesn't exist
        if not os.path.exists(dest_directory):
            print("Directory: 0x18-dynamic_libraries not found!")
            os.makedirs(dest_directory)
            print("Directory: 0x18-dynamic_libraries created.")

        parrent_dir = os.path.abspath('..')
        for folder, subfolders, files in os.walk(parrent_dir):
            if folder != parrent_dir:
                for filename in files:
                    if filename.endswith(".c") != filename.endswith("main.c") :
                        print("File Name: ", filename)
                        print(f"Path: ", os.path.join(folder, filename))
                        with open(os.path.join(folder, filename)) as file:
                            content = file.read()
                            # Check if the file contains any of the functions
                            for function in functions:
                                if function in content:
                                    print(f"{filename} contains {function}")
                                    # Copy the file to the destination directory
                        #            shutil.copy(os.path.join(directory, filename), dest_directory)
                    # print("No prototype files found!")
        break
    else:
        print("You are not in alx-low_level_programming repo\n{}".format(directory))
        exit()