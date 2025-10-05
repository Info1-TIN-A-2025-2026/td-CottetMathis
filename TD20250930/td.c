#include <stdio.h>

int main(int argc, const char *argv[])
{

	const double G = 6.67E-11;
	double m1 = 0;
	double m2 = 0;
	double dist = 0;
	double fg = 0;

	printf("Calculateur de force gravitationnelle \nEntrer la masse 1 [kg]: ");

	scanf("%lf", &m1);

	if (m1 <= 0)
	{
		printf("Erreur, m1 ne peut ne peut pas être égale ou inférieur à 0");
	}

	printf("Entrer la masse 2 [kg]: ");

	scanf("%lf", &m2);

	if (m2 < 0)
	{
		printf("Erreur, m2 ne peut ne peut pas être égale ou inférieur à 0");
	}

	printf("Entrer la distance entre les 2 corps [m]: ");

	scanf("%lf", &dist);

	if (dist < 0)
	{
		printf("Erreur, la distance ne peut ne peut pas être égale ou inférieur à 0");
	}


	fg = G * (m1 * m2) / (dist * dist);

	printf("F= %e N \n", fg);
}