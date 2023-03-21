#!/usr/bin/python3
import os

cw_dir = os.getcwd()
print(cw_dir)
repo_root_dir = os.path.abspath('..')
print(repo_root_dir)

for folder, subfolders, files in os.walk(repo_root_dir):
    if folder != repo_root_dir:
        for f in files:
            if f.endswith(".h"):
                print("File Name: ", f)
                print(f"Path: ", os.path.join(folder, f))

