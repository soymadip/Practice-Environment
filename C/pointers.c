#include <stdio.h>

int q8() {
/*
 * Pointers to Pointers:
 a.  Declare an integer variable val and initialize it to 25.
 b.  Declare a pointer to an integer p_val and make it point to val.
 c.  Declare a pointer to a pointer to an integer pp_val and make it point to p_val.
 d.  Print the following:
    * The value of val using val itself.
    * The value of val using p_val (dereferencing once).
    * The value of val using pp_val (dereferencing twice).
    * The memory address of val using val, p_val, and pp_val.
    * The memory address of p_val using p_val and pp_val.
 */


   int val = 25;
   int *p_val = &val;
   int **pp_val = &p_val;


   printf("%d\n", val);
   printf("%d\n", *p_val);
   printf("%d\n", **pp_val);

   printf("%p\n", &val);
   printf("%p\n", p_val);
   printf("%p\n", *pp_val);

   printf("%p\n", &p_val);
   printf("%p\n", pp_val);

    return 0;
}


void _square(int *n) {

    *n = *n * *n;
    printf("Square is: %d\n", *n);

}


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void printAddress(int n) {
    printf("Address in func n: %p\n", &n);
}


void doWork(int a, int b,int *sum,int *prod, float *avg,float *division) {

    *sum = a +b;
    *prod = a*b;
    *division = (float) a/b;
    *avg = ((float) a + b)/2;
}


// =============== Main Function ===============

/*
int main() {
    // q8();

    // int num = 10;
    // _square(&num);
    // printf("value of num: %d\n",num);
    // int num1 =10, num2 = 20;

    /*
    int a=4,b=5,sum,prod;
    float avg, div;

    doWork(a,b, &sum, &prod,&avg,  &div);
    printf("sum:%d\nprod:%d\navg:%f\ndivision:%f\n",sum, prod, avg,div);



   char start_char = 'a';
   char end_char = 'z';

   for (char *pointer_char = &start_char; *pointer_char <=end_char; (*pointer_char)++) {
       printf("%c\n", *pointer_char);
   }

    return 0;
}
*/
