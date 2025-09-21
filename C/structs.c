#include <stdio.h>


typedef struct student {
    char *name;
    int roll;
    float cgpa;
} stu;

int main() {

    stu s1 = {
        "soymadip",
        45,
        4.9
    };

    printf("The roll of s1 student is: %d\n", s1.roll);

    struct student *ptr = &s1;

    printf("The roll of s1 student is: %d\n", ptr->roll);

    return 0;
}
