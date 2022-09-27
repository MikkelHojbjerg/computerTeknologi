#include <stdio.h>
#include <assert.h>
#include "areaRect.h"

int main(){

	int x1, x2;
	int y1, y2;
	int res;

	printf("\nPlease input the first (x, y) coordinate of the rectangle:\n");
	scanf("%d", &x1);
	scanf("%d", &y1);

	//Precondition, da x og y ikke kan have samme værdi
	assert(!(x1 == y1));

	printf("Please do the same for the second coordinate:\n");
	scanf("%d", &x2);
	scanf("%d", &y2);

	assert(!(x2 == y2));

	res = areaRect(x1, y1, x2, y2);

	//Postconditon. Hvis arealet er lig med nul, da det ikke kan lade sig gøre
	assert(!(res == 0));

	//Postcondition. Hvis areaet kommer tilbage negativt så ganges det med -1, da et areal ikke kan være negativt.
	if(res < 0){
		res *= -1;
	}

	printf("The area of the rectangle is: %d\n", res);

	return 0;
}
