#include <stdio.h>

int main() {
    int hang, cot;
    int i, j;
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);
    int arr[100][100];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < hang; i++) {
        for (j = 0; j < cot; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nCac phan tu nam tren duong bien cua ma tran la:\n");
    for (i = 0; i < hang; i++) {
        for (j = 0; j < cot; j++) {
            if (i == 0 || i == hang - 1 || j == 0 || j == cot - 1)
                printf("%4d", arr[i][j]); 
            else
                printf("    "); 
        }
        printf("\n");
    }

    return 0;
}

