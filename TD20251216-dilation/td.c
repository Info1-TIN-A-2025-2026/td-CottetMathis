#include <stdio.h>
#include <stdlib.h>

#define TABLE_H 16
#define TABLE_W 16

#define NUM_GRAY 256

void display_matrix(unsigned char matrix[TABLE_H][TABLE_W]);
void dilatation(unsigned char f[TABLE_H][TABLE_W], unsigned char g[TABLE_H][TABLE_W]);
void substract(unsigned char g[TABLE_H][TABLE_W], unsigned char f[TABLE_H][TABLE_W], unsigned char r[TABLE_H][TABLE_W]);

int main(int argc, const char *argv[])
{
	unsigned char f[TABLE_H][TABLE_W] = {0};
	unsigned char g[TABLE_H][TABLE_W] = {0};

	for (unsigned long row = 4; row < 12; row++)
	{
		for (unsigned long col = 4; col < 12; col++)
			f[row][col] = 255;
	}

	display_matrix(f);

	puts("");

	dilatation(f, g);
	display_matrix(g);

	return 0;
}

void display_matrix(unsigned char matrix[TABLE_H][TABLE_W])
{
	for (unsigned long row = 0; row < TABLE_H; row++)
	{
		for (unsigned long col = 0; col < TABLE_W; col++)
			printf("%3d ", matrix[row][col]);
		puts("");
	}
}

void dilatation(unsigned char f[TABLE_H][TABLE_W], unsigned char g[TABLE_H][TABLE_W])
{
	for (unsigned long row = 1; row < TABLE_H -1; row++)
	{
		for (unsigned long col = 1; col < TABLE_W -1; col++)
		{
			if(f[row][col]>0)
			{
				for (long delat_row = -1; delat_row <= 1; delat_row++)
				{
					for (long delta_col = -1; delta_col <= 1; delta_col++)
					{
						g[row + delat_row][col + delta_col] = 255;
					}
				}
			}
		}
	}
}

// A FINIR
void substract (unsigned char g[TABLE_H][TABLE_W], unsigned char f[TABLE_H][TABLE_W], unsigned char r[TABLE_H][TABLE_W]) 
{
	for (unsigned long row = 1; row < TABLE_H -1; row++)
	{
		for (unsigned long col = 1; col < TABLE_W -1; col++)
		{
			if(f[row][col]>0)
			{
				for (long delat_row = -1; delat_row <= 1; delat_row++)
				{
					for (long delta_col = -1; delta_col <= 1; delta_col++)
					{
						g[row + delat_row][col + delta_col] = 255;
					}
				}
			}
		}
	}
}
