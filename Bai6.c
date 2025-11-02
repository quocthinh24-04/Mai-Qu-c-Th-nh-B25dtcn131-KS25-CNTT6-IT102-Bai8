#include <stdio.h>

int main() {
    int hang, cot;
    int i, j;
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);
    int arr[100][100];
    printf("\nNhap cac phan tu cua mang:\n");
    for (i = 0; i < hang; i++) {
        for (j = 0; j < cot; j++) {
            printf("Nhap phan tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nMang 2 chieu vua nhap la:\n");
    for (i = 0; i < hang; i++) {
        for (j = 0; j < cot; j++) {
            printf("%5d", arr[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}

