#include "sort.h"

int fnc_qs_partition(int a[], int start, int end){
	int left, right, pivot;
	int temp, i;

	left = start;
	right = end;
	pivot = (start+end) / 2;

	for(i=0; i<SIZE; i++){
		if(i==pivot){
			printf(" [%d] ", a[i]);
		}else{
			printf("%-3d", a[i]);
		}
	}
	printf("\npivot=%d / ", pivot);

	while(left<right){
		while( (a[left] < a[pivot]) && (left<right) ){
			left++;
		}
		printf("left=%d / ", left);

		while( (a[right] >= a[pivot]) && (left<right) ){
			right--;
		}
		printf("right=%d\n\n", right);

		if(left<right){
			temp = a[left];
			a[left] = a[right];
			a[right] = temp;

			if(left == pivot){
				left = start;
			}

			for(i=0; i<SIZE; i++){
				if(i==pivot){
					printf(" [%d] ", a[i]);
				}else{
					printf("%-3d", a[i]);
				}
			}
			printf("\n");
		}
	}

	temp = a[pivot];
	a[pivot] = a[right];
	a[right] = temp;

	pivot = right;

	return pivot;
}

void fnc_qs_sort(int a[], int start, int end){
	int p;

	if(start<end){
		p = fnc_qs_partition(a, start, end);
		fnc_qs_sort(a, start, p-1);
		fnc_qs_sort(a, p+1, end);
	}
}
