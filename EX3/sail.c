#include <stdio.h>
int main (void)
{
	double area, height, base, x, n;
	int i;
	printf("Area of the sail: ");
	scanf("%lf", &area);
	n = 3.0 * area;
	x = n;
	if (n > 0) {
		for ( i = 0; i < 50; i++) {
		    x = 0.5 * (x + n / x);
		}
	} else {
	    x = 0;
	}
	height = x;
	base = (2.0 / 3.0 ) * height;
	printf("Height of the sail: %.2f meters\n", height);
	printf("Base of the sail: %.2f meters\n", base);
	return 0;
}
