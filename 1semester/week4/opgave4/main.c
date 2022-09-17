#include <stdio.h>
#include <assert.h>
#include "2dArray.h"

int main(){
	int a[100][150];
	int res;

	res = dArray(*a);

	printf("%d\n",res);

	return 0;
}
