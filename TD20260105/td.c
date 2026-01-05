#include <stdio.h>
#include<string.h>

void display(char *t);

int main(int argc, const char *argv[])
{
	char s1[] = "mot";
	printf("memory size : %ld\n", sizeof(s1));
	printf("num cells   : %ld\n", sizeof(s1) / sizeof(char));

	unsigned long count = 0;

	while(s1[count] != 0)
	{
		count++;
	}
	printf("String length : %lu\n", count);
	printf("String lentgh : %lu\n", strlen(s1));

	char s2[100] = "mot";
	printf("memory size : %ld\n", sizeof(s2));
	printf("String lentgh : %lu\n", strlen(s2));

	char *s3 = "pipo";
	printf("memory size : %ld\n", sizeof(s3));
	printf("String lentgh : %lu\n", strlen(s3));

	char s4[] = "Lorem ipsum dolor sit amet,"\
	"consectetur adipiscing elit. Sed non risus."\
	"Suspendisse lectus tortor, dignissim sit amet,"\
	"adipiscing nec, ultricies sed, dolor.";

	printf("memory size : %ld\n", sizeof(s4));
	printf("String lentgh : %lu\n", strlen(s4));

	char s5[] = "ABC";
	display(s5);

	return 0;
}

void display(char *t)
{
	for (int i = 0; i <= strlen(t);i++)
	{
		printf("%3d ", t[i]);
	}
	puts("");
	for (int i = 0; i <= strlen(t);i++)
	{
		printf("%2c  ", t[i]);
	}
	puts("");

	char s6[][10] = {
		"ABC",
		"DEF",
		"GHIJKL"
	};

	char *s7[] = {	//3 x 1sizeof(address) = 24 bytes
		"ABC",
		"DEF",
		"GHIJKL"
	};
}
