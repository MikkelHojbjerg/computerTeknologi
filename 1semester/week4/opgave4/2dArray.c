#include <stdio.h>
#include <assert.h>

void dArray(int a[100][150], int counter[20]){

	//Koden kører alle de 100 arryes igennem
	for(int i = 0; i < 100; i++){
		//Koden tjekker det array den er nået til igennem
		for(int x = 0; x < 150; x++){
			//Hvis det array programmet tjekker har et tal over 1 eller under 20
			if(a[i][x] > 0 && a[i][x] < 20){
				// a skal være over 0 da det er den første index i arryet
				/*Hvis tallet er over en og mindre end 20
				så lægger counter arrayet en til det tal som bliver tjekket */
				counter[a[i][x]]++;
			}
		}
	}

	/* Precondition, a skal indeholde tal mellem 1 og 20.
	Hvis counter er lig 0 er der ikke nogle^tal mellem 1 og 20. */
	assert(!(counter == 0));

}
