#include <stdio.h>
#include <assert.h>

int main(){

	int n;


	printf("Input the desired length of your array:\n");
	scanf("%d", &n);

	int a[n];

	for(int i = 0; i < n; i++){
		scanf("%ld\n", &a[i]);
	}

}
