#include <stdio.h>
#include <assert.h>
#include "avgArray.h"

int main(){

	int n;
	double res;

	//Programmet spørger om længden af arrayet som brugeren gerne vil bruge
	printf("\nInput the desired length of your array:\n");
	scanf("%d", &n);

	int a[n];

	//Programmet spørger brugeren hvilke værdier der skal være i arryaet
	printf("Please input some numbers to find the average\n");
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}


	avgArray(a, n);

	return 0;

}
