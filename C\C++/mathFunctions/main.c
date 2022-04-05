#include <stdio.h>
#include <math.h>


int main ()
{
	double A = sqrt(9);
	double B = pow(2,4);
	int C = round(3.14);
	int D = ceil(3.14);
	int E = floor(3.99);
	double F = fabs(-100);
	double G = log(3);
	double H = sin(45);
	double I = cos(45);
	double J = tan(45);

	printf("\n%1.5f",A);
	printf("\n%1.5f",B);
	printf("\n%i",C);
	printf("\n%i",D);
	printf("\n%i",E);
	printf("\n%1.5f",F);
	printf("\n%1.5f",G);
	printf("\n%1.5f",H);
	printf("\n%1.5f",I);
	printf("\n%1.5f\n",J);

	return 0;
}
