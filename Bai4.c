#include<stdio.h>

int main(){
	int arr[5]={1,2,4,6,7};
	int i;
	printf ("mang ban dau: ");
	for (i=0;i<5;i++){
		printf ("%d ",arr[i]);
	}
	for (i=0;i<5;i++){
		if(arr[i]%2==0){
			arr[i]+=3;
		}else{
			arr[i]+=2;
		}
	}
	printf("\nmang sau khi thay doi: ");
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
