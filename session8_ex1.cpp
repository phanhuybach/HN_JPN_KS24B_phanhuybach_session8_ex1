#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?t m?ng
    int mang[] = {1, 2, 3, 4, 5};
    int n = sizeof(mang) / sizeof(mang[0]); // Tính s? ph?n t? c?a m?ng

    // In ra t?ng ph?n t? trong m?ng t? cu?i v? d?u
    printf("Cac phan tu trong mang tu cuoi ve dau:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", mang[i]);
    }

    return 0;
}

