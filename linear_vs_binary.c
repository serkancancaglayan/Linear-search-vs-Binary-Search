#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "quick_sort.h"
#include "searchs.h"

// 10 elements
// linear search : 0.000434s ,  0.000431 s , 0.000429 s
// binary search(including sorting time): 0.000508 s , 0.000444 s , 0.000460 s

// 10000 elements
// linear search : 0.097530 s , 0.096955 s , 0.096038 s , 0.096409 s 
// binary search(including sorting time): 0.016323 s, 0.017736 s, 0.014314 s, 0.014620 s

// 100000 elements
// linear earch : 7.709049 s, 7.824341 s
// binary search(including sorting time) : 0.106926 s, 0.111281 s


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
