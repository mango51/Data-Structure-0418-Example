#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE		8

void fnc_select_sort(int a[], int size);
void fnc_bubble_sort(int a[], int size);

int fnc_qs_partition(int a[], int start, int end);
void fnc_qs_sort(int a[], int start, int end);