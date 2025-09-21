#include <stdio.h>
#include <stdlib.h>


int main() {

    int *ptr;

    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 5;
    ptr[4] = 8;
    ptr[5] = 9;

    for (int i = 0; i <6; i++) {
        printf("index %d: %d.\n", i, ptr[i]);
    }

    free(ptr);

    return 0;

}
