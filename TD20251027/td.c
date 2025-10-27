#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	/*int a = 0;
	int b = 0;
	int q = 0;
	int r = 0;

	printf("Enter a: ");
	scanf("%d", &a);

	printf("Enter b: ");
	scanf("%d", &b);

	q = a / b;
	r = a % b;

	printf("a/b = %d\n", q);
	printf("a%%b = %d\n", r);	// %%display '%'

	int a = 0;

	a = 10;
	printf("%d\n", a++);

	// printf("%d\n", a);
	// a++; // post incrementation

	a = 10;
	printf("%d\n", ++a);

	// ++a; // pre incrementation
	// printf("%d\n", a);

	//a = 10;
	//printf("%d %d %d\n", ++a, ++a, a++); // AVOID

	char x = 127;
	x++;
	printf("%d\n", x);

	unsigned char y = 127;
	y++;
	printf("%d\n", y);*/

	const unsigned int I_MIN = 2;
	const unsigned int I_MAX = 100;

	unsigned int i = 0;

	for (i = I_MIN; i < I_MAX; i++)
	{
		bool is_prime = true;

		unsigned int j = 0;
		for (j = I_MIN; j < i-1 ; j++)		//j*j<=i-1
		{
			if ((i%j)==0)
			{
				is_prime = false;
			}
		}

		if (is_prime)
		{
			printf("%u\n", i);
		}
	}
	
	return 0;
}