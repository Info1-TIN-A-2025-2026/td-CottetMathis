#include <stdio.h>
#include <stdlib.h>

#define NB_CELLS 1000
#define MIN_VALUE (-100)
#define MAX_VALUE (100)

#define CANDIDATE_VALUE 93

int main(int argc, const char *argv[])
{
	srand(0);
	long t[NB_CELLS] = {0};

	for (unsigned long i = 0; i < NB_CELLS; i++)
	{
		t[i] = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
		printf("%4lu, %ld\n", i, i[t]);
	}

	for(unsigned long i = 0; i < NB_CELLS; i++)
	{
		if (t[i] == CANDIDATE_VALUE)
		{
			printf("%d found at postion %lu\n", CANDIDATE_VALUE, i);
			return 0;
		}		
	}
}

