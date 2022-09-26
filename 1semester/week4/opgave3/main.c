#include <stdio.h>
#include "longest_seq.h"

int main(){

	int a[13] = {0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 11, 0, 0};
	int b[5] = {1, 2, 3, 4, 5};
	int res = 0;
	int length;

	//Length er sat til 13 da det første array som funktionen tjekker er array a
	length = 13;
	res = longest_seq(a, length);

	printf("The longest sequence of zeros in array a is %d\n", res);

	//Length er nu sat til 5 da funktionen nu skal tjekke array b
	length = 5;
	res = longest_seq(b, length);

	printf("The longest sequence of zeros in array b is %d\n", res);

	return 0;
}
