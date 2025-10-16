#include <stdio.h>

int main() {
    // short: so nguyen nho, thuong 2 byte
    short a = 10;

    // int: so nguyen thong thuong, thuong 4 byte
    int b = 100;

    // long: so nguyen lon hon int, thuong 4 hoac 8 byte
    long c = 1000L;

    // long long: so nguyen rat lon, thuong 8 byte
    long long d = 10000LL;

    // unsigned short: so nguyen khong dau nho, chi luu so duong (0 den 65535)
    unsigned short e = 500;

    // unsigned int: so nguyen khong dau, chi luu so duong lon hon short
    unsigned int f = 100000U;

    // unsigned long: so nguyen khong dau lon, dung luu gia tri duong rat lon
    unsigned long g = 1000000UL;

    // unsigned long long: so nguyen khong dau rat lon, dung luu gia tri rat lon
    unsigned long long h = 10000000ULL;

    // char: ky tu, thuong 1 byte, luu chu cai hoac ma ASCII
    char i = 'A';

    // In ra cac gia tri
    printf("short a = %d\n", a);
    printf("int b = %d\n", b);
    printf("long c = %ld\n", c);
    printf("long long d = %lld\n", d);
    printf("unsigned short e = %hu\n", e);
    printf("unsigned int f = %u\n", f);
    printf("unsigned long g = %lu\n", g);
    printf("unsigned long long h = %llu\n", h);
    printf("char i = %c\n", i);

    return 0;
}
