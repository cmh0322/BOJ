#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static int VillageNum;

typedef struct Village{
	int x;
	int y;
}Village;

static Village* vill = NULL;

static float GetEuclideanDistance(Village* a, Village* b){
	return sqrt(pow(a.x - b.x) - pow(a.y - b.y));
}

static void GetInput(){
	scanf("%d", &VillageNum);

	vill = (Village*)malloc(sizeof(Village) * VillageNum);
	for(int i=0; i<VillageNum; i++){
		scanf("%d %d", &vill[i].x, &vill[i].y);
	}
}


