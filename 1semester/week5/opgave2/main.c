#include <stdio.h>
#include "increment.h"

int main(){

	int v = 5;

	increment(&v);

	printf("%d\n", v);

	return 0;
}
