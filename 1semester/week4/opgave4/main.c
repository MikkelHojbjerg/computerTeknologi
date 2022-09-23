#include <stdio.h>
#include <assert.h>
#include "avgArray.h"

int main(){

	int n;
	double res;

	printf("\nInput the desired length of your array:\n");
	scanf("%d", &n);

	int a[n - 1];

	printf("Please input some numbers to find the arvage\n");
	for(int i = 0; i < n; i++){
		scanf("%d\n", &a[i]);
	}


	for(int i = 0; i < n; i++){
		printf("%d\n", a[i]);
	}


	//avgArray(a, n);

	return 0;

}
