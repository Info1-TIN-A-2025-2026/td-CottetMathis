#include <stdio.h>
#include <math.h>

double delta(const double a, const double b, const double c);

int main(int argc, const char *argv[])
{
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;

	printf("Entrer les valeurs de a, b et c\n");

	scanf("%lf %lf %lf", &a, &b, &c);
	d = delta(a, b, c);

	printf("Delta = %lf\n", d);

	return 0;
}

double delta(const double a, const double b, const double c)
{
	double delta = 0;

	delta = pow(b, 2) - 4 * a * c;

	return delta;
}