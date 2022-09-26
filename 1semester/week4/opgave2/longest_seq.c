#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int longest_seq(int *list, int length){

	assert(length > 0);

	int temp = 0;
	int res = 0;

	for(int i = 0; i < length; i++){
		if(list[i] == 0){
			temp++;
		}else{
			if(res < temp){
				res = temp;
				temp = 0;
			}
	}	}

	if(!(res > 0)){
		res = -1;
	}

	return res;
}
