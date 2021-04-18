#include "sort.h"

void main(){
	int size = 8;
	int list[8] = {69, 10, 30, 2, 16, 8, 31, 22};
	int i;
	//fnc_select_sort(list, size);
	//fnc_bubble_sort(list, size);

	srand(time(NULL));
	for(i=0; i<SIZE; i++){
		list[i] = rand()%100;
	}
	fnc_qs_sort(list, 0, SIZE-1);
}