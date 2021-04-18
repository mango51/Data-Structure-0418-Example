#include "sort.h"

void fnc_select_sort(int a[], int size){
	int i, j, min, temp;

	for(i=0; i<size; i++){
		printf("%3d ", a[i]);
	}
	printf("\n\n");

	printf("\t[Á¤·Ä]\n");
	for(i=0; i<size-1; i++){
		min = i;
		for(j=i+1; j<size; j++){
			if(a[min] > a[j]){
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;

		for(j=0; j<size; j++){
			printf("%3d ", a[j]);
		}
		printf("\n");
	}
}
