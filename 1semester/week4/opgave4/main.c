#include <stdio.h>
#include <assert.h>
#include "avgArray.h"

int main(){

	int i = 0;
	int n;
	double res;

	printf("\nInput the desired length of your array:\n");
	scanf("%d", &n);

	int a[n];

	printf("Please input some numbers to find the arvage\n");
	for(i = 0; i < n; i++){
		scanf("%d\n", &a[i]);
	}


	for(; i < n; i++){
		printf("%d\n", a[i]);
	}


	//avgArray(a, n);

	return 0;

}
