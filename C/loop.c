#include <stdio.h>
#include <math.h>

int sum(int x, int y);
void printTable(int n);

int main() {
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    printTable(num);

    double square = pow(num, 2);
    printf("square of %d is: %f\n", num, square);

    return 0;
}

// Function to print the multiplication table up to 10
void printTable(int n) {
    printf("\nMultiplication Table for %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

// Function to calculate the sum of two numbers
int sum(int x, int y) {
    return x + y;
}
