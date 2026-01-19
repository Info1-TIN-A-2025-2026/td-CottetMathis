#include <stdio.h>
#include <math.h>
 
#define PARTIE_ENTIERE 10
#define PARTIE_DECIMALE 12
 
int main(int argc, const char *argv[])
{
    long a = 123456;
    long b = 29;
    char q[PARTIE_ENTIERE+1+PARTIE_DECIMALE+1]={0};

	long quotient = a / b; //4257
	long index = PARTIE_ENTIERE - 1;

	do{
		q[index--] = (quotient % 10) + '0';
		quotient /= 10;
	} while (quotient > 0);

	for (; index >= 0;index--)
	{
		q[index] = ' ';
	}
	q[PARTIE_ENTIERE] = '.';

	long r = a % b;

	for (index = PARTIE_ENTIERE + 1; index <= PARTIE_ENTIERE + PARTIE_DECIMALE; index++)
	{
		long d = r * 10 / b;
		q[index] = d + '0';
		r = r * 10 - d * b;
	}
	q[index] = '\0';
	printf("q=\"%s\"\n",q);
}