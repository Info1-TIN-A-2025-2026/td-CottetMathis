#include <stdio.h>

void proc(void);	// Protoype for proc function 
void f1(const int a);	//const --> a ne sera pas modifier lors de la fonction f1

int main(int argc, const char *argv[])
{
	int i = 0;

	proc();

	printf("Entrer une valeur entière :\n");
	scanf("%d", &i);
	f1(i);
	return 0;
}

void proc(void)
{
	puts("Bonjour,");
	return;
}

void f1(const int a)
{
	printf("%d\n", 3 * a);
	return;
}
