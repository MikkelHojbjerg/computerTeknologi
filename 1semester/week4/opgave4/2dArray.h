#include <stdio.h>
#include <assert.h>

int dArray(int *a){
	int k;
	int j;
	int res = 0;

	for(int i = 0; i < 100; i++){
		for(int x = 0; x < 150; x++){
			if(*a > 1 && *a < 20){
				res++;
			}
		}
	}

	return res;
}
