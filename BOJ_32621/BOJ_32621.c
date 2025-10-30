#include <stdio.h>
#include <string.h>
#include <stdbool.h>

static char input[9];

static void GetInput(){
	scanf(" %s", input);
}

static bool IsCute(){
	char BeforePlus[8];
	char AfterPlus[8];
	int BeforePlusLength = 0;
	int AfterPlusLength = 0;


	int cur = 0;
	int inputlen = strlen(input);
	
	//saves Before Plus Value
	while(cur < inputlen){
		if(input[cur] == '+'){
			cur++;
			break;
		}

		if(input[cur] < '0' || input[cur] > '9') return false;
		BeforePlus[BeforePlusLength++] = input[cur++];
	}
	//saves After Plus Value
	while(cur < inputlen){
		if(input[cur] < '0' || input[cur] > '9') return false;
		AfterPlus[AfterPlusLength++] = input[cur++];
	}
	//if lengths are 0...
	if(BeforePlusLength == 0)return false;

	//if both lengths arn't same...
	if(BeforePlusLength != AfterPlusLength) return false;
	
	//if either Before&plus are like 01...
	if(BeforePlus[0] == '0' || AfterPlus[0] == '0') return false;

	//check the values
	for(int i=0; i<BeforePlusLength; i++){
		if(BeforePlus[i] != AfterPlus[i]) return false;
	}

	return true;
}


int main(){
	GetInput();
	if(IsCute()) printf("CUTE\n");
	else printf("No Money\n");

	return 0;
}
