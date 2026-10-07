#include <stdio.h>
int main()
{
	double speed_kmh, distance, v, t, a;
	printf("Enter takeoff speed (km/hr): ");
	scanf("%lf", &speed_kmh);
	printf("Enter catapult distance (meters): ");
	scanf("%lf", &distance);

	v = speed_kmh * 1000 / 3600;
	a = (v * v) / (2 * distance);
	t = v / a;

	printf("Accleration: %.2f m/s^2\n", a);
	printf("Time to takeoff: %.2f s\n", t);
	return 0;
}
