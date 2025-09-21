#include <stdio.h>

typedef struct student {
  char *name;
  int roll;
  float cgpa;
} stu;

typedef struct employee {
  int id;
  int salary;
  char *dept;
} emp;

typedef struct address {
  int house_no;
  int block;
  char city[100];
  char state[100];
} add;

void printInfo(add address) {

  printf("Address is: %d, %d, %s, %s\n", address.house_no, address.block,
         address.city, address.state);
}

int main() {

  add address[5];

  for (int i = 1; i < 5; i++) {

    printf("For person %d:\n\n", i);

    printf("Enter House No: ");
    scanf("%d", &address[i].house_no);

    printf("Enter Block: ");
    scanf("%d", &address[i].block);

    printf("Enter city: ");
    fgets(address[0].city, 100, stdin);

    printf("Enter state: ");
    fgets(address[0].state, 100, stdin);
  }

  printInfo(address[0]);
  printInfo(address[1]);
  printInfo(address[2]);
  printInfo(address[3]);
  printInfo(address[4]);

  return 0;
}
