#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);

            if (arr[i] % 2 == 0) {
                printf(">> Gia tri phai la so le! Vui long nhap lai.\n");
            }
        } while (arr[i] % 2 == 0);
    }
    printf("\nMang cac so le vua nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

