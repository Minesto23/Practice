#include <stdio.h>
#include <math.h>

double secondGradeEcuation(float b)
{
	double x = powf(b, 2);
	//result[0] =  powf(b, 2);
	//result[1] =  2;
	//
	return x;
}



void main (){
	
	float a, b, c;

	printf("Please insert the value of A: \n");
	scanf("%f",&a);
	printf("Please insert the value of B : \n");
	scanf("%f",&b);
	printf("Please insert the values of C: \n");
	scanf("%f",&c);

	double x = secondGradeEcuation(b);

	//printf("X1 = %.3f \nX2 = %.3f \n",result[0],result[1]);
	printf("%f",x);
}
