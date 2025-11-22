#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

double kmh_to_ms(double s_kmh);
double reaction_distance(double speed, double reaction_time);
double break_distance(double speed, double deceleration);
double total_stop_distance(double speed, double reaction_time, double deceleration);
bool stop_before_obstacle(double stop_distance, double obstacle_distance);

int main(int argc, const char *argv[])
{
	double speed_kmh = 0;
	double reaction_time = 0;
	double deceleration = 0;
	double d_obstacle = 0;

	printf("Enter the speed (km/h): ");
	scanf("%lf", &speed_kmh );
	printf("Enter the reaction time (s): ");
	scanf("%lf", &reaction_time );
	printf("Enter the deceleration (m/s/s): ");
	scanf("%lf", &deceleration );
	printf("Enter the distance to the obstacle (m): ");
	scanf("%lf", &d_obstacle );

	double speed_ms = kmh_to_ms(speed_kmh);

	printf("Speed : %.2lf km/h = %.2lf m/s\n", speed_kmh, speed_ms);

	if (stop_before_obstacle(total_stop_distance(speed_ms, reaction_time, deceleration), d_obstacle))
	{
		puts("✅ no collision");
	}
	else 
	{
		puts("❌ collision");
	}

	return 0;
}

bool stop_before_obstacle(double stop_distance, double obstacle_distance)
{
	return stop_distance<obstacle_distance;
}

double total_stop_distance(double speed, double reaction_time, double deceleration)
{
	assert(speed >= 0);
	assert(deceleration >= 0);
	assert(reaction_time >= 0);

	double d = reaction_distance(speed,reaction_time) + break_distance(speed, deceleration);

	printf("Total stop distance : %.2lf m => ", d);

	return d;
}

double break_distance(double speed, double deceleration)
{
	//d = speed^2 / 2deceleration
	assert(speed>=0);
 	assert(deceleration>=0);

	double d = (speed*speed) / (2.*deceleration);

	printf("Break distance : %.2lf m\n", d );

	return d;
}

double reaction_distance(double speed, double reaction_time)
{
	assert(speed>=0);
	assert(reaction_time>=0);

	double d = speed * reaction_time;

	printf("Reaction distance : %.2lf m\n", d);

	return d;
}

double kmh_to_ms(double s_kmh)
{
	assert(s_kmh > 0);

	return s_kmh / 3.6;
}