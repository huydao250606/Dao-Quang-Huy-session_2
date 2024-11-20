#include <stdio.h>

int main() {
    // Khai bao va khoi tao bien chieu dai va chieu rong hinh chu nhat
    int chieuDai = 8; // Chieu dai hinh chu nhat
    int chieuRong = 5; // Chieu rong hinh chu nhat

    // Tinh chu vi va dien tich hinh chu nhat
    int chuVi = 2 * (chieuDai + chieuRong);       // Chu vi hinh chu nhat: 2 * (chieu dai + chieu rong)
    int dienTich = chieuDai * chieuRong;         // Dien tich hinh chu nhat: chieu dai * chieu rong

    // In ra ket qua
    printf("Chieu dai: %d\n", chieuDai);
    printf("Chieu rong: %d\n", chieuRong);
    printf("Chu vi hinh chu nhat: %d\n", chuVi);
    printf("Dien tich hinh chu nhat: %d\n", dienTich);

    return 0;
}
