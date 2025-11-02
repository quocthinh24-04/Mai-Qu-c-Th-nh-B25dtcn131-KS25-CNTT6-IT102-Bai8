#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n]; 
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nMang vua nhap la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

