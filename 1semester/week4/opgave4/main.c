#include <stdio.h>
#include <assert.h>
#include "avgArray.h"

int main(){

	int n;
	double res;

	printf("\nInput the desired length of your array:\n");
	scanf("%d", &n);

	int a[n];

	printf("Please input some numbers to find the average\n");
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}


	avgArray(a, n);

	return 0;

}
