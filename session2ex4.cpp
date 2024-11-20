#include <stdio.h>

int main() {
    // Khai bao va khoi tao bien canh hinh vuong
    int canh = 5; // Bien luu do dai canh hinh vuong

    // Tinh chu vi va dien tich hinh vuong
    int chuVi = 4 * canh;      // Chu vi hinh vuong: 4 * canh
    int dienTich = canh * canh; // Dien tich hinh vuong: canh^2

    // In ra ket qua
    printf("Canh hinh vuong: %d\n", canh);
    printf("Chu vi hinh vuong: %d\n", chuVi);
    printf("Dien tich hinh vuong: %d\n", dienTich);

    return 0;
}
