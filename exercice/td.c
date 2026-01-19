#include <stdio.h>

#define TAILLE 5

int compter_positifs(int *tab, int taille);
void filtrer_positifs(int *tab, int taille);
void double_valeurs(int *tab, int taille);

int main(int argc, const char *argv[])
{
	int counter1 = 0;

	int t[TAILLE] = {3, -1, 0, 5, -2};

	counter1 = compter_positifs(t, TAILLE);
	printf("Le tableau contient %d valeurs strictement positives\n", counter1);

	double_valeurs(t, TAILLE);
	return 0;
}

int compter_positifs(int *tab, int taille)
{
	int counter = 0;

	for (int i = 0; i < taille; i++)
	{
		if(tab[i] > 0)
		{
			counter++;
		}
	}
	return counter;
}

void double_valeurs(int *tab, int taille)
{
	for (int i = 0; i < taille; i++)
	{
		tab[i] = tab[i] * 2;
	}

	for (int i = 0; i < taille; i++)
	{
		printf("%d ", tab[i]);
	}
	puts("");
	
}
