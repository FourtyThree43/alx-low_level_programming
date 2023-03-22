#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dlfcn.h>

/* function pointer to the original rand & srand function */
int (*original_rand)(void);
int (*original_srand)(unsigned int seed);

/* get the pointer to the original rand & srand function */
void __attribute__((constructor)) init(void)
{
	//printf("init function called\n");
	original_rand = dlsym(RTLD_NEXT, "rand");
	original_srand = dlsym(RTLD_NEXT, "srand");
}

/* Intercept srand with the given seed */
void srand(unsigned int seed)
{
	//printf("Intercepted srand with seed %u\n", seed);
	original_srand(seed);
}

/* Intercept rand function and return winning numbers */
int rand(void)
{
	int value = original_rand();

	static const int winning_numbers[] = {9, 8, 10, 24, 75, 10};
	static int next_index = 0;
	int number = winning_numbers[next_index];
	next_index = (next_index + 1) % 6;

	value = number - 1;
	//printf("Intercepted rand with value %d\n", value);

	return (value);
}
