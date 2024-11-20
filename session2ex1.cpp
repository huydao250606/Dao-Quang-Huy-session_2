#include <stdio.h>

int main() {
    // Kieu int: Dung de luu tru cac so nguyen
    int a = 10; // So nguyen

    // Kieu float: Dung de luu tru cac so thuc voi do chinh xac don
    float b = 3.14; // So thuc

    // Kieu double: Dung de luu tru cac so thuc voi do chinh xac kep
    double c = 3.14159265359; // So thuc do chinh xac cao

    // Kieu char: Dung de luu tru mot ky tu ASCII
    char d = 'A'; // Mot ky tu

    // Kieu _Bool: Luu tru gia tri boolean (true/false)
    _Bool e = 1; // 1 dai dien cho true

    // Kieu unsigned int: So nguyen khong am
    unsigned int f = 42; // So nguyen khong am

    // Kieu short: So nguyen ngan
    short g = 32000; // So nguyen ngan

    // Kieu long: So nguyen dai
    long h = 100000L; // So nguyen dai

    // Kieu long long: So nguyen rat dai
    long long i = 100000000000LL; // So nguyen rat dai

    // Kieu unsigned char: Luu gia tri nguyen duong tu 0 den 255
    unsigned char j = 255; // Gia tri nguyen duong

    // In ra gia tri cua cac bien
    printf("int: %d\n", a);
    printf("float: %f\n", b);
    printf("double: %lf\n", c);
    printf("char: %c\n", d);
    printf("_Bool: %d\n", e);
    printf("unsigned int: %u\n", f);
    printf("short: %d\n", g);
    printf("long: %ld\n", h);
    printf("long long: %lld\n", i);
    printf("unsigned char: %u\n", j);

    return 0;
}
