#include "sort.h"

void fnc_bubble_sort(int a[], int size){
	int i, j, k, temp;

	for(i=0; i<size; i++){
		printf("%3d", a[i]);
	}

	printf("\n\n*******[Á¤·Ä]********\n");
	for(i=size-1; i>0; i--){
		for(j=0; j<i; j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;

				for(k=0; k<size; k++){
					printf("%3d", a[k]);
				}
				printf("\n");
			}			
		}
		printf("\n");
	}
}
