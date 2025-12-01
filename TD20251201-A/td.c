#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int n = atoi(argv[1]); 

	if ((n%2)==0)
	{
		puts("Le nombre doit être impaire");
		return 1;
	}

	for (int l= 1; l <= n; l++)
	{
		for (int c = 0; c < n - l; c++) putchar(' ');
		for (int c = 0; c < (2*l-1); c++) putchar('*');
		putchar('\n');
	}

	for (int l = 0; l < 2;l++){
		for (int c = 0; c < n - 1; c++) putchar(' ');
		puts("|");
	}

	for (int c = 0; c < n-2; c++)
	{
		putchar(' ');
	}
	puts("---");
}