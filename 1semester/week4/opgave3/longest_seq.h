#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int longest_seq(int *list, int length){

	//precondition på array. Da et array skal minimum have en værdi i sig, skal programmet tjekke om det er sandt
	assert(length > 0);

	int temp = 0;
	int res = 0;

	//programmet kører arrayet igennem
	for(int i = 0; i < length; i++){
		//Programmet tjekker om pladsen i arrayet har et nul i sig
		if(list[i] == 0){
			//Hvis ja, så bliver temp pludset med en
			temp++;
		}else{
			/*Hvis den nuværende plads ikke har et nul i sig og temp er større end res.
			Vi vil gerne tjekke om der er flere eller mindre nuller i rækkenfølgen. Hvis ja så bliver res lig med temp*/
			if(res < temp){
				res = temp;
				//temp bliver nulstillet da vi gerne vil tælle den næste rækkefølge af nul
				temp = 0;
			}
	}	}

	//Hvis der ikke er nogle nul i arrayet vil vi gerne have at programmet skriver -1 istedet for nul.
	if(!(res > 0)){
		res = -1;
	}

	return res;
}
