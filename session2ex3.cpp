#include <stdio.h>

int main() {
    // Khai bao va khoi tao hai bien so nguyen
    int a = 10; // Bien so nguyen thu nhat
    int b = 5;  // Bien so nguyen thu hai

    // Tinh tong, hieu, tich, thuong va luu ket qua vao cac bien khac
    int tong = a + b;     // Bien luu ket qua tong
    int hieu = a - b;     // Bien luu ket qua hieu
    int tich = a * b;     // Bien luu ket qua tich
    float thuong = (float)a / b; // Bien luu ket qua thuong (ep kieu sang float)

    // In ra ket qua
    printf("Tong cua %d va %d la: %d\n", a, b, tong);
    printf("Hieu cua %d va %d la: %d\n", a, b, hieu);
    printf("Tich cua %d va %d la: %d\n", a, b, tich);
    printf("Thuong cua %d va %d la: %.2f\n", a, b, thuong);

    return 0;
}
