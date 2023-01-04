#ifndef _HEADER_FILE_H_
#define _HEADER_FILE_H_

#include <stdio.h>
#include <stddef.h>
#include <string.h>

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);

#endif 
