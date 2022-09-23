#include <stdio.h>
#include <assert.h>

void avgArray(int *a, int n){

	double res = a[0];

	n += 1;

	for(int i = 1; i < n; i++){
		res += a[i];
		printf("%f\n", res);
	}

	res /= n;

	printf("%f is the average number of the arrayy\n", res);

}
