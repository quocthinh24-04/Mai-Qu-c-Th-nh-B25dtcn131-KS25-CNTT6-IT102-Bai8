#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int choice, pos, value, i, found;
    do {
        printf("\n---------- Quan ly danh sach so nguyen ----------\n");
        printf("1. Them phan tu vao vi tri bat ky\n");
        printf("2. Xoa phan tu o vi tri bat ky\n");
        printf("3. Cap nhat gia tri tai vi tri bat ky\n");
        printf("4. Tim kiem phan tu trong mang\n");
        printf("5. Hien thi mang\n");
        printf("6. Thoat chuong trinh\n");
        printf("Chon chuc nang (1-6): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap vi tri can them (0-%d): ", n);
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                for (i = n; i > pos; i--)
                    arr[i] = arr[i - 1];
                arr[pos] = value;
                n++;
                printf("Da them thanh cong!\n");
                break;

            case 2:
                printf("Nhap vi tri can xoa (0-%d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                for (i = pos; i < n - 1; i++)
                    arr[i] = arr[i + 1];
                n--;
                printf("Da xoa thanh cong!\n");
                break;

            case 3:
                printf("Nhap vi tri can cap nhat (0-%d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                arr[pos] = value;
                printf("Da cap nhat thanh cong!\n");
                break;

            case 4:
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Tim thay %d tai vi tri %d\n", value, i);
                        found = 1;
                    }
                }
                if (!found)
                    printf("Khong tim thay %d trong mang.\n", value);
                break;

            case 5:
                if (n == 0) {
                    printf("Mang dang rong!\n");
                } else {
                    printf("Cac phan tu trong mang: ");
                    for (i = 0; i < n; i++)
                        printf("%d ", arr[i]);
                    printf("\n");
                }
                break;

            case 6:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 6);

    return 0;
}

