#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	double share_price = 0;
	double strike_price = 0;
	double nb_days = 0;
	double contract_price = 0;
	double VOLATILITY = 0.274;
	double INTEREST_RATE = 0.015;

	printf("Contract CALL price calculator\nEnter the share price [USD]: ");

	scanf("%lf", &share_price);

	if (share_price <= 0)
	{
		printf("Error, the share price must be greater than 0");
	}

	printf("Enter the strike price [USD]: ");

	scanf("%lf", &strike_price);

	if (strike_price <= 0)
	{
		printf("Error, the strike price must be greater than 0");
	}

	printf("Enter the number of days until expiry: ");

	scanf("%lf", &nb_days);

	if (nb_days <= 0)
	{
		printf("Error, the number of days must be greater than 0");
	}

}