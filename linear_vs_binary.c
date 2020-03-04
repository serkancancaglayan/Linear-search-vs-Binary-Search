#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "quick_sort.h"
#include "searchs.h"
int main(){
	
	size_t arr_size = 100;
	int * arr = (int *) malloc(sizeof(int) * arr_size);
	for(int i = 0; i < arr_size; i++){
		srand(i);
		arr[i] = rand() % arr_size;
	}

	clock_t begin = clock();
	
	quickSort(arr, 0, arr_size - 1);
	for(int i = 0; i < arr_size; i++){
		srand(i);
		int random = rand() % arr_size;
		//linearSearch(arr, arr_size, random);
		binarySearch(arr, 0, arr_size, random);
	}
	
	clock_t end = clock();
	float time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("%f", time_spent);
}
