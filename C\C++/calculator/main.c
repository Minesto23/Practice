#include <stdio.h>
#include <math.h>

int main (){

	float a,b,c;
	float sqrtOperation, result[2];


	printf("===== Second grade equation calculator =====\nax^2+bx+c=0\n\n");
	printf("Input the value of a:\n");
	scanf("%f",&a);
	printf("Input the value of b:\n");
	scanf("%f",&b);
	printf("Input the value of c:\n");
	scanf("%f",&c);

	sqrtOperation =  powf(b, 2)-(4*a*c);

	if(sqrtOperation<0){
		printf("The result is with imaginary numbers");
	}else{
		result[0] = (-b + sqrtf(sqrtOperation))/(2*a);
		result[1] = (-b - sqrtf(sqrtOperation))/(2*a);

		for(int i = 0;i<2;i++){
			printf("%.3f \n",result[i]);
		}
	}
	
	return 0;
}
