#include <stdio.h>


void percentagee() {

    int marks[4];

    printf("Enter Full marks per sub: ");
    scanf("%d", &marks[0]);

    printf("Enter marks for chem: ");
    scanf("%d", &marks[1]);

    printf("\nEnter marks for Phy: ");
    scanf("%d", &marks[2]);

    printf("\nEnter marks for Math: ");
    scanf("%d", &marks[3]);

    float percentage = ((((float)(marks[1] + marks[2] + marks[3] ))*100)/(marks[0]*3));

    printf("Tolal percentage is: %f\n", percentage);

}


void calcGst() {

    float price[3], gstRate;
    int i = 1;

    printf("Enter GST Rate: ");
    scanf("%f", &gstRate);

    while (i <=3) {
        printf("Enter price of item %d: ", i);
        scanf("%f", &price[i-1]);
        i ++;
    }

    printf("\n");

    i = 1;
    while (i<=3) {
        printf("The total price of item %d with %f%% GST: %f\n",i,gstRate, (price[i-1]*(gstRate/100))+price[i-1]);
        i++;
    }
}

void comparePointers() {

    int age = 10;
    int age2 = 12;
    int age3 = 13;

    int *ptr = &age;

    printf("Ptr at 1st: %u\n", ptr);

    int *ptr2 = &age2;
    int *ptr3 = &age3;

    // ptr++;
    printf("Ptr after ptr++ : %u\n", ptr);

    printf("Ptr3 at 1st: %u\n", ptr3);
    printf("%u\n", ptr - ptr3);
}


void printNumbers(int arr[]) {

    arr[3] = 12;

}

int countOdd(int arr[], int arSz) {

    int oddC = 0;

    while (arSz >0) {

        if (arr[arSz - 1] % 2 != 0) {
            oddC++;
        }
        arSz--;
    }

   return   oddC;
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void revArry(int arr[], int size) {

    for (int start = 0, end = size-1; start < (size/2); start++, end--) {

        int temp   = arr[start];
        arr[start] = arr[end];
        arr[end]   = temp;
    }
}

void storeTable(int arr[][10], int rNum, int digit) {

    for (int i =0; i<10; i++) {

        arr[rNum][i] = digit *(i+1);
    }
}

int main() {


    int tables[2][10];

    storeTable(tables, 0, 2);
    storeTable(tables, 1, 3);


    for (int i =0; i<10; i++) {

        printf("%d ", tables[0][i]);
    }


    printf("\n");
    for (int i =0; i<10; i++) {
        printf("%d ", tables[1][i]);
    }

    return 0;
}
