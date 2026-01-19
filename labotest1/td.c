#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int pos_rob_x = 0;
	int pos_rob_y = 0;
	int pos_cible_x = 0;
	int pos_cible_y = 0;
	int taille_grille = 0;
	int max_step = 0;

	int counter = 0;
	int counter_bounce = 0;
	int pos2_rob_x = 0;
	int pos2_rob_y = 0;
	int c = 0;
	int rebond = 0;

	srand(0);

	taille_grille = atoi(argv[1]);
	pos_rob_x = atoi(argv[2]);
	pos_rob_y = atoi(argv[3]);
	pos_cible_x = atoi(argv[4]);
	pos_cible_y = atoi(argv[5]);
	max_step = atoi(argv[6]);

	printf("Taille de la grille N : %d\n", taille_grille);
	printf("Position initiale x,y : %d,%d\n", pos_rob_x, pos_rob_y);
	printf("Position cible xt,yt  : %d,%d\n", pos_cible_x, pos_cible_y);
	printf("Nombre maximal de pas : %d\n", max_step);
	printf("  %d :    %d, %d   (position initiale)\n", counter, pos_rob_x, pos_rob_y);

	while (max_step > counter && (pos_rob_x != pos_cible_x || pos_rob_y != pos_cible_y ))
	{
		int i = rand() % 4;
		pos2_rob_x = pos_rob_x;
		pos2_rob_y = pos_rob_y;

		switch(i){
		case 0 :
			pos2_rob_y--;
			counter++;
			c = 'N';
			break;

		case 1:
			pos2_rob_y++;
			counter++;
			c = 'S';
			break;

		case 2:
			pos2_rob_x--;
			counter++;
			c = 'O';
			break;

		case 3:
			pos2_rob_x++;
			counter++;
			c = 'E';
			break;
		}

		if((pos2_rob_x <= taille_grille && pos2_rob_x > 0) && (pos2_rob_y <= taille_grille && pos2_rob_y > 0))
		{
			pos_rob_x = pos2_rob_x;
			pos_rob_y = pos2_rob_y;
			rebond = ' ';
		}
		else
		{
			pos2_rob_x = pos_rob_x;
			pos2_rob_y = pos_rob_y;
			counter_bounce++;
			rebond = '*';
		}

		printf("  %d : %c  %d, %d %c\n", counter, c, pos_rob_x, pos_rob_y, rebond);
	}

	puts("");
	if(counter >= max_step)
	{
		printf("CIBLE NON ATTEINTE après %d pas.\n", counter);
		printf("Position finale : (%d, %d)\n", pos_rob_x, pos_rob_y);
	}
	else
	{
		printf("CIBLE ATTEINTE en %d pas !\n", counter);
	}
	
	printf("Rebonds : %d\n", counter_bounce);

	return 0;
}