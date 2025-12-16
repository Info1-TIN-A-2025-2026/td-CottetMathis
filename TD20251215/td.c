#include <stdio.h>
#include <stdlib.h>

#define NB_CELLS 1000
#define MIN_VALUE (-100)
#define MAX_VALUE (100)

#define CANDIDATE_VALUE 93

int main(int argc, const char *argv[])
{
	srand(0);
	long t[NB_CELLS] = {0};

	for (unsigned long i = 0; i < NB_CELLS; i++)
	{
		t[i] = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
		printf("%4lu, %ld\n", i, i[t]);
	}

	for(unsigned long i = 0; i < NB_CELLS; i++)
	{
		if (t[i] == CANDIDATE_VALUE)
		{
			printf("%d found at postion %lu\n", CANDIDATE_VALUE, i);
			return 0;
		}		
	}
}


#include <stdio.h>
#include <stdlib.h>

#define TABLE_H 4
#define TABLE_W 4
#define MAX_VALUE 255
#define MIN_VALUE 0
#define NUM_GRAY 256

void display_matrix(unsigned char m[TABLE_H][TABLE_W]);
void fill_matrix(unsigned char matrix[TABLE_H][TABLE_W], unsigned char min_value, unsigned char max_value);
void compute_histo(unsigned char matrix[TABLE_H][TABLE_W], unsigned long histo[NUM_GRAY]);
void display_histo(unsigned long h[NUM_GRAY]);

int main(int argc, const char *argv[])
{
	srand(0);
	unsigned char f[TABLE_H][TABLE_W] = {0};
	unsigned long h[NUM_GRAY] = {0};

	fill_matrix(f, 0, 255);
	display_matrix(f);

	compute_histo(f, h);
	display_histo(h);

	return 0;
}

void display_matrix(unsigned char m[TABLE_H][TABLE_W])
{
	for (unsigned long row = 0; row < TABLE_H; row++)
	{
		for (unsigned long col = 0; col < TABLE_W; col++)
			printf("%3d ", m[row][col]);
		puts("");
	}
}

void fill_matrix(unsigned char matrix[TABLE_H][TABLE_W], unsigned char min_value, unsigned char max_value)
{
	for (int i = 0; i < TABLE_H; i ++)
	{
		for (int j = 0; j < TABLE_W; j++)
			matrix[i][j] = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
	}
}

void compute_histo(unsigned char matrix[TABLE_H][TABLE_W], unsigned long histo[NUM_GRAY])
{
	for (unsigned long row = 0; row < TABLE_H; row++)
	{
		for (unsigned long col = 0; col < TABLE_W; col++)
			histo[matrix[row][col]]++;
	}
}

void display_histo(unsigned long h[NUM_GRAY])
{
	for (unsigned long gray = 0; gray < NUM_GRAY; gray++)
	{
		printf("%4ld", h[gray]);
	}
	puts("");
}
