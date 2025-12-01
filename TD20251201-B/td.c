#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	int i = 0;
	int n = 0;
	double a = 0;
	double p = 0;

	if (argc < 2)
	{
		puts("Argument is missing");
		return 1;
	}

	n = atoi(argv[1]);

	for (i = 0; i <= n; i++)
	{
		double f = (pow(-1, i)) / (2 * i + 1);
		a = a + f;
	}

	p = 4. * a;

	printf("%10d : %+10.8lf\n",n , p);
	return 0;
}