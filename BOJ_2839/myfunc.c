//myfunc.c

#include "myfunc.h"
#include <stdio.h>

int GetKilos(){
	int input;
	scanf("%d", &input);	
	
	return input;
}

int GetBagsNum(const int kilos){
	int fives = kilos / 5; 
	int threes;
	int leftover;

	while(fives >= 0){
		//calc leftover
		leftover = kilos - fives * 5;
		//calc three
		if(leftover % 3 == 0){
			threes = leftover / 3;
			return fives + threes;		
		}
		fives--;
	}
	return -1;
}

