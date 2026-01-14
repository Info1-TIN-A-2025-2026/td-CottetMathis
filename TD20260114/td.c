#include <stdio.h>

#define COLS 18
#define ROWS 17
#define WEST 0
#define SUD 1
#define EST 2
#define NORTH 3

int main(int argc, const char *argv[])
{
	int x = 9;
	int y = 8;
	int counter = 0;
	int dist_a_parcourir = 1;
	int dist_effectuee = 0;
	int direction = WEST;
	int m[ROWS][COLS] = {0};

	while(x < COLS && y < ROWS && x >= 0 && y >= 0)
	{
		switch (direction)
		{
			case WEST:
				x = x - 1;
				break;

			case SUD:
				y = y + 1;
				break;

			case EST:
				x = x + 1;
				break;

			case NORTH:
				y = y - 1;
				break;
		}

		if (x < COLS && y < ROWS && x >= 0 && y >= 0)
		{
			m[y][x] = 1;
			dist_effectuee++;
			if(dist_effectuee == dist_a_parcourir)
			{
				dist_a_parcourir++;
				direction = (direction + 1) % 4;
				dist_effectuee = 0;
			}
		}
	}

	for (y = 0; y < ROWS; y++)
	{
		for (x = 0; x < COLS; x++)
		{
			putchar(m[y][x] == 0 ? ' ' : 'X');
			counter += m[y][x];
		}
		puts("");
	}
	printf("Steps = %d\n", counter);

	return 0;
}