#include <stdio.h>
#include "myfunc.h"

int main(){
	const int kilos = GetKilos();
	
	int answer = GetBagsNum(kilos); 
	printf("%d\n", answer);
	return 0;
}

