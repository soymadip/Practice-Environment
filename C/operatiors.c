#include <stdio.h>


int avg() {

    int a, b, c;

    a = 5;
    b = 6;
    c = 7;

    float avg = a+b+c/3.0;

    printf("%f", avg);

    return 0;
}


int main() {

    avg();

    printf("\n");
    return 0;
}
