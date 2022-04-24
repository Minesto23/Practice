#include <omp.h>
#include <stdio.h>


void main(){

		int i, n;
		float a[256], b[256], result;

		/* Some initializations */
		n=256;
		result = 0.0;
		for(i=0;i<n;i++){
			a[i] = i * 1.0;
			b[i] = i * 2.0;
		}
	#pragma omp parallel for default(shared) private(i) reduction(+:result)

			for(i=0; i<n;i++)
				result += (a[i]*b[i]);

			printf("Final resul = %f \n",result);

		
}
