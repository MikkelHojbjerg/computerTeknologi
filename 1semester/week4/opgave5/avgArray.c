#include <stdio.h>
#include <assert.h>

void avgArray(int *a, int n){

	double res = 0;

	//For loop kører hele arrayet, og ligger alle værdierne sammen og definer den som res
	for(int i = 0; i < n; i++){
		res += a[i];
		printf("%f\n", res);
	}

	//Når loopet er kørt, så divider programmet alle værdierne med længden som brugeren tidligere har angivet
	res /= n;

	printf("%f is the average number of the arrayy\n", res);

}
