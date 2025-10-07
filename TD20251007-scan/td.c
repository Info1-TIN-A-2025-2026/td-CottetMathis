#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	float x = 0.f;
	float y = 0.f;

	int ret = 0;

	/*printf("Enter a floating point value x: ");
	ret=scanf("%f", &x); //&x = adresse of variable
	printf("X=%.4f\n", x);
	printf("ret=%d\n", ret);

	printf("Enter a floating point value y: ");
	ret=scanf("%f", &y); //&x = adresse of variable
	printf("y=%.4f\n", y);
	printf("ret=%d\n", ret);*/

	printf("Enter tow floating points vakues (space sperated): ");
	ret=scanf("%f%f", &x, &y); 
	printf("ret=%d\n", ret);
	printf("X=%.4f\n", x);
	printf("Y=%.4f\n", y);
}
