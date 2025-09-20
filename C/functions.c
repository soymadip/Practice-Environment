#include <stdio.h>

// Code for nth Fibonacci number using recursion


int fibonacci(int n) {

    if (n == 1) {
        return 1;
    }

    if (n == 0) {
        return 0;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main() {

    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));

    return 0;
}
