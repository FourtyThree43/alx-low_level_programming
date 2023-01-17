#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int _putchar(char c);

/*0x0A-argc_argv*/
int main(int argc, char **argv);
int main(int argc, char *argv[] __attribute__((unused)));
int main(int argc, char *argv[]);

#endif
