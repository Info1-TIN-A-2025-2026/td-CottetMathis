#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	/*const unsigned int BASE = 10;

	unsigned int n = atoi(argv[1]);

	unsigned int w = n == 0 ? 1 : 0;

	while (n > 0)
	{
		n /= BASE; 		// same as : n = n / BASE;
		w++;
	}

	printf("%d\n", w);7*/

	unsigned int n = atoi(argv[1]);
	unsigned int w = 0;
	
	do {
		w *= 10;
		w += n % 10;
		n /= 10;
	}while( n > 0);

	printf("w=%u\n", w);

	return 0;
}