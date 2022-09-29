#include <stdio.h>
#include <assert.h>
#include "2dArray.h"
#include <stdlib.h>

int main(){
	int a[100][150];
	int counter[20];

	for(int i = 0; i < 100; i++){
		for(int x = 0; x < 150; x++){
			a[i][x] = rand() % (100 + 1);
		}
	}

	//Kalder dArray funktion
	dArray(a, counter);

	//Printer hver værdi i counter arrayet
	for(int i = 0; i < 20; i++){
		printf("%d\n", counter[i]);

	}

	return 0;
}
