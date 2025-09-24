#include <stdio.h>
#include <stdlib.h>

typedef struct student {
  char *name;
  char *dept;
  int roll;
  float cgpa;
} stud;

typedef struct address {
  int house_no;
  int block;
  char *city;
  char *state;
} addr;

void printAddres(addr addr) {
  printf("Address is: %d, %d, %s, %s\n", addr.house_no, addr.block, addr.city,
         addr.state);
}

typedef struct vector {
  int x;
  int y;
} vector;


vector addVector(vector v1, vector v2) {
  vector sum;

  sum.x = v1.x + v2.x;
  sum.y = v1.y + v2.y;

  return sum;
}

int *bestArr(int slots, int size) {
  int *arr = (int *)calloc(slots, size);
  return arr;
}


int main() {

  int sizes = sizeof(float);

  int *array = bestArr(10, sizes);

  array[0] = 10000;

  printf("Array first element: %d\n", array[0]);

  addr address1 = {1, 12, "Naihati", "West Bengal"};
  addr address[10];

  address[0] = address1;

  vector v1 = {3, 4};
  vector v2 = {1, 4};

  vector sum = addVector(v1, v2);

  printf("Sum is: %d %d\n", sum.x, sum.y);

  printAddres(address[0]);

  stud s1 = {"soymadip", "CST", 232409132, 9.0};
  stud s2 = {"Rahul", "DE", 232409111, 2.0};

  stud *sptr = &s1;

  printf("student %d:\n", 1);
  printf("\tname: %s\n", sptr->name);
  printf("\tdept: %s\n", sptr->dept);
  printf("\troll no: d%d\n", s1.roll);
  printf("\tcgpa: %.1f\n", s1.cgpa);

  printf("student %d:\n", 2);
  printf("\tname: %s\n", s2.name);
  printf("\tdept: %s\n", s2.dept);
  printf("\troll no: d%d\n", s2.roll);
  printf("\tcgpa: %.1f\n", s2.cgpa);

  return 0;
}
