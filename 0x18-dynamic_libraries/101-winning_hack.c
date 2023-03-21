#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int printf(const char *format, ...)
{
        write(STDOUT_FILENO, "9 8 10 24 75 - 9\n", 17);
        write(STDOUT_FILENO, "Congratulations, you win the Jackpot!\n", 38);
        exit(EXIT_SUCCESS);
}
