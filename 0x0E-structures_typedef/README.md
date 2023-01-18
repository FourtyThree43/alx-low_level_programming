# alx-low_level_programming
0x0E-structures_typedef

No 4:
It uses strdup to allocate memory for the name and owner strings and copy the contents of the input strings into them. If strdup fails to allocate memory, it returns NULL, then the function frees the previously allocated memory and also returns NULL. 
If strdup is successful, the function assigns the age variable and returns the address of the newly created dog.