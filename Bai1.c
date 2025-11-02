#include<stdio.h>

int main(){
	int arr[5] = {1,2,3,4,7};
	int i;
	int haveEvenNumber = 0;
	printf("Cac phan tu so chan trong mang la: ");
for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { 
            printf("%d ", arr[i]);
            haveEvenNumber = 1; 
        }
    }

    if (!haveEvenNumber) {
        printf("Mang khong chua so chan.");
    }

    return 0;
}
