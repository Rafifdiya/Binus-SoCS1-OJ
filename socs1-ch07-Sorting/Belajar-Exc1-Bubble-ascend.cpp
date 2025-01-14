#include<stdio.h>
int main(){
	int arr1[] = {4, 6, 23, 18, 7, 47, 2, 83, 16, 38};
	int n = 10;  
	
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n-1; j++){
			if (arr1[j] > arr1[j+1]){  //Ascending
				int temp = arr1[j];
				arr1[j] = arr1[j+1];
				arr1[j+1] = temp;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n"); //PEMBATASSSSSSSSSSSSSSSSSSSSSSSS

	int arr2[] = {4, 6, 23, 18, 7, 47, 2, 83, 16, 38};
	
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n-1; j++){
			if (arr2[j] < arr2[j+1]){ //Descending
				int temp = arr2[j];
				arr2[j] = arr2[j+1];
				arr2[j+1] = temp;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		printf("%d ", arr2[i]);
	}
	printf("\n");

return 0;
}
	
