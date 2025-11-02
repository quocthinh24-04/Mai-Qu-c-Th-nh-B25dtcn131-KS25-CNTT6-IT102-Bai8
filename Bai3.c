#include<stdio.h>

int main(){
	int arr[5] = {1,2,3,4,5};
	int i;
	int max = arr[0];
	int min = arr[0];
	
	for (i=1;i<=5;i++){
		if(arr[i]>max)
		max = arr[i];
		if(arr[i]<min)
		min = arr[i];
	}
	printf("Phan tu lon nhat la: %d\n", max);
	printf("phan tu nho nhat la: %d\n", min);
	return 0;
}
