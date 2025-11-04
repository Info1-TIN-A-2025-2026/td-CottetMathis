#include <stdio.h>

int main(int argc, const char *argv[])
{
	const int I_MIN = 10;
	const int I_MAX = 20;

	int j = 1;
	int i = 0;

	do
	{
		int ret = 0;
		printf("Saisir un entier appartenant à [%d..%d] : ", I_MIN, I_MAX);
		ret = scanf("%d", &i);

		if (ret != 1)		//Vider le buffer clavier
		{
			while(getchar()!='\n'){}

			// char c = 0;
			// do
			// {
			// 	c = getchar();
			// } while (c != '\n');
		}

		if((I_MIN <= i) && (i <= I_MAX))
		{
			printf("Le nombre est : %d\n", i);
			j = 0;
			i = 0;
		}
	} while (j);

	//plus simple :
	// do
	// {
	// 	int ret = 0;
	// 	printf("Saisir un entier appartenant à [%d..%d] : ", I_MIN, I_MAX);
	// 	ret = scanf("%d", &i);

	// 	if (ret != 1)		//Vider le buffer clavier
	// 	{
	// 		while(getchar()!='\n'){}

	// 		// char c = 0;
	// 		// do
	// 		// {
	// 		// 	c = getchar();
	// 		// } while (c != '\n');
	// 	}
	// }while(i< I_MIN || I_MAX < i);

	// printf("Le nombre est : %d\n", i);
}