#include <stdio.h>

int main() {

  /*
   * int age;
   * printf("Enter your age: ");
   * scanf("%d", &age);
   *
   * // Ternary Operator
   * age >= 18 ? printf("Adult\n") : age <= 18 && age >= 13 ? printf("Teen\n") :
   * printf("Child\n");
   */

  // Switch Case
  /*
    char day; // m-mon, t-tue, w-wed, t-thu, f-fri, s-sat
    printf("Enter your day(1-7): ");
    scanf("%c", &day);

    switch (day) {
    case 'm':
      printf("Monday\n");
      break;
    case 't':
      printf("Tuesday\n");
      break;
    case 'w':
      printf("Wednesday\n");
      break;
      default:
          printf("Invalid input\n");
    }
  */

  // // give grade

  // float marks;

  // printf("Enter Marks: ");
  // scanf("%f", &marks);

  // printf("\n");
  // if (marks>=90) {
  //     printf("A+");
  // }
  // else if (marks<90 && marks>=70) {
  //     printf("A");
  // }
  // else if (marks<70 && marks >=30) {
  //     printf("B");
  // }
  // else if(marks<30 && marks>=0) {
  //     printf("C");
  // }
  // printf("\n");
  //


  // Check if given is UpperCase of not

  char ch;

  printf("Enter a character: ");
  scanf("%c", &ch);
  printf("\n");

  if (ch<='Z' && ch>='A') {
      printf("UpperCase.\n");
  }
  else if (ch<='z' && ch>='a') {
      printf("LowerCase.\n");
  }
  else {
      printf("Not English Character.\n");
  }

  return 0;
}
