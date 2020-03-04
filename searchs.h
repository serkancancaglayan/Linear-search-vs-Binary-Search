int linearSearch(int *arr, int size, int key){
	for(int i = 0; i < size; i++){
		if(arr[i] == key){
			return i;
		}
	}
	return -1;
}

int binarySearch(int *arr, int low, int high, int key){
	while(low <= high){
		int mid = (low + high) / 2;
		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] < key){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return -1;
}