#include <stdio.h>
#include <math.h>

int f(unsigned int t, int *a, int *b, int *c);
void c2p(const double x, const double y, double *rho, double *theta);

int main(int argc, const char *argv[])
{
	int h = 0;
	int m = 0;
	int s = 0;
	unsigned int t = 1234567;

	printf("adresse of h=%p\n", &h);
	printf("adresse of h=%p\n", &m);
	printf("adresse of h=%p\n", &s);
	int r = f(t, &h, &m, &s);

	int x = 0;
	int y = 0;
	int r = 0;
	int t = 0;

	c2r(x, y, &r, &t);

	printf("t=%d %d %d\n", h, m, s);
}

void c2p(const double x, const double y, double *rho, double *theta)
{
	*theta = atan2(y, x);
	*rho = sqrt(x * x + y * y);
}

int f(unsigned int t, int *a, int *b, int *c)
{
	printf("a=%p\n", a);
	printf("b=%p\n", b);
	printf("c=%p\n", c);

	*a = t / 3600;
	*b = (t / 60) - *a * 60;
	*c = t - *a * 3600 - *b * 60;

	return 0;
}
