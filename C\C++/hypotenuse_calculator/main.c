#include <stdio.h>
#include <math.h>


double hypotenuse(float A, float B)
{
	double C = sqrtf(pow(A, 2)+pow(B, 2));

	return C;
}

int main()
{
	
	float A;
	float B;

	printf("Triangle Hypotenuse Calculator:\n\nPlease insert value of the first side: ");
	scanf("%f", &A);
	printf("\nPlease insert value of the second side: ");
	scanf("%f", &B);

	printf("\n\nThe hypotenuse value is: %5.f", hypot(A, B)); //Using math.h function
	printf("\n\nThe hypotenuse value is: %5.f", hypotenuse(A, B)); //Using my own function

	return 0;
}

