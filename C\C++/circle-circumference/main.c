#include <stdio.h>
#include <math.h>


int main()
{
	float radius;
	float circumference;

	printf("So you wanna know the circle circumference?\nPlease input the circle radius: ");
	scanf("%f",&radius);
	circumference = 2 * M_PI * radius;
	printf("\nCircle circumference: %.5f\n", circumference);

	return 0;
}
