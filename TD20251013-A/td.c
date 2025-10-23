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
	double N(double z);

	printf("Contract CALL price calculator\nEnter the share price [USD]: ");

	scanf("%lf", &share_price);

	if (share_price <= 0)			// Check if share price is egal or lower than 0
	{
		printf("Error, the share price must be greater than 0\n");
		return 1;
	}

	else if (share_price >= 1.7e308)			// Check if share price is overflow
	{
 		printf("Error Overflow, the share price must be less than 1.7e308\n");
    	return 4;
	}

	printf("Enter the strike price [USD]: ");

	scanf("%lf", &strike_price);

	if (strike_price <= 0)			// Check if strike price is egal or lower than 0
	{
		printf("Error, the strike price must be greater than 0\n");
		return 2;
	}
	
	else if (strike_price >= 1.7e308)			// Check if strike price is overflow
	{
    	printf("Error Overflow, the strike price must be less than 1.7e308\n");
    	return 5;
	}

	printf("Enter the number of days until expiry: ");

	scanf("%lf", &nb_days);

	if (nb_days <= 0)				// Check if number of days is egal or lower than 0
	{
		printf("Error, the number of days must be greater than 0\n");
		return 3;
	}
	
	else if (nb_days >= 1.7e308)			// Check if number of days is overflow
	{
    	printf("Error Overflow, the number of days must be less than 1.7e308\n");
    	return 6;
	}
	
    double years = nb_days / 365.0;			// Number of days in years

    double d1 = (log(share_price / strike_price) + (INTEREST_RATE + (pow(VOLATILITY, 2) / 2)) * years) / (VOLATILITY * sqrt(years));
    double d2 = d1 - VOLATILITY * sqrt(years);

    contract_price = share_price * N(d1) - strike_price * exp(-INTEREST_RATE * years) * N(d2);		// Calculate the contract price

    printf("The estimated CALL contract price is: %.2f USD\n", contract_price);

    return 0;
}

double N(double z)		// Fonction N for the formula 
{
    return 0.5 * (1.0 + erf(z / sqrt(2.0)));
}
