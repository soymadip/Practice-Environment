/*
 * csdm - College Student/Staff Data Management System
 * Description: A simple C program to manage student and staff data using
 * structures. Version: 0.1
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 500
#define MAX_TEACHERS 50
#define MAX_REG_NUM 11

#define MAX_NAME 50
#define MAX_DEPT 10

typedef struct student {
  char regNum[MAX_REG_NUM]; // Registration number
  char name[MAX_NAME];      // name
  int age;                  // age
  char dept[MAX_DEPT];      // Department
  int std;                  // Studying year
} stud;

typedef struct teacher {
  char name[MAX_NAME]; // name
  char dept[MAX_DEPT]; // Department
  int id;              // ID
} teach;

void clearBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
  }
}

void lowerStr(char str[]) {
  for (int i = 0; str[i] != '\0'; i++) {
    str[i] = tolower((unsigned char)str[i]);
  }
}

void clearTerm() {
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}

stud students[MAX_STUDENTS];
teach teachers[MAX_TEACHERS];

int studentCount = 0;
int teacherCount = 0;

void addStudent() {
  if (studentCount >= MAX_STUDENTS) {
    printf("\nDatabase is full! Cannot add more students.\n");
    return;
  }
  printf("==> Add Student to Database.\n");

  printf("-> Name: ");
  fgets(students[studentCount].name, MAX_NAME, stdin);
  students[studentCount].name[strcspn(students[studentCount].name, "\n")] = 0;

  printf("-> Age: ");
  scanf("%d", &students[studentCount].age);
  clearBuffer();

  printf("-> Department: ");
  fgets(students[studentCount].dept, MAX_DEPT, stdin);
  students[studentCount].dept[strcspn(students[studentCount].dept, "\n")] = 0;
  lowerStr(students[studentCount].dept);

  printf("-> Studying Year: ");
  scanf("%d", &students[studentCount].std);
  clearBuffer();

  printf("-> Reg No: ");
  fgets(students[studentCount].regNum, MAX_REG_NUM, stdin);
  students[studentCount].regNum[strcspn(students[studentCount].regNum, "\n")] =
      0;
  lowerStr(students[studentCount].regNum);

  studentCount++;

  printf("\nStudent added successfully with Reg No: %s\n",
         students[studentCount - 1].regNum);
}

void getStudentInfo() {
  printf("==> Get Student Info\n");

  char regNum[MAX_REG_NUM];
  printf("\n-> Enter Student's Reg No: ");
  fgets(regNum, MAX_REG_NUM, stdin);
  regNum[strcspn(regNum, "\n")] = '\0';
  lowerStr(regNum);

  int found = 0;

  for (int i = 0; i < studentCount; i++) {
    if (strcmp(students[i].regNum, regNum) == 0) {
      printf("\nDetails for Student with Reg No: %s\n", students[i].regNum);
      printf("--------------------------------------\n");
      printf("Name: %s\n", students[i].name);
      printf("Age: %d\n", students[i].age);
      printf("Department: %s\n", students[i].dept);
      printf("Studying Year: %d\n", students[i].std);
      printf("--------------------------------------\n");
      found = 1;
      break;
    }
  }

  if (!found) {
    printf("No student found in Database with Reg No: %s\n", regNum);
  }
}

void showStudentCount() {
  printf("==> Show Student Count\n");
  printf("\n-> Current student count: %d\n", studentCount);
}

void deleteStudent() { printf("Delete student - To be implemented\n"); }

// Teacher functions
void addTeacher() { printf("Add Teacher functionality - To be implemented\n"); }

void deleteTeacher() {
  printf("Delete Teacher functionality - To be implemented\n");
}

void showTeacherCount() {
  printf("Show Teacher Count functionality - To be implemented\n");
  printf("Current teacher count: %d\n", teacherCount);
}

void getTeacherInfo() {
  printf("Get Teacher Info functionality - To be implemented\n");
}

int main() {
  int answer = 0;

  do {
    clearTerm();

    // ==================== Welcome Message =================
    printf("\n\t\tWelcome to Student management system\n");
    printf("\nPlease choose an action:- \n");

    printf("\n-> Student\n");
    printf("      1. Add Student\n");
    printf("      2. Delete Student\n");
    printf("      3. Show student Count\n");
    printf("      4. Get Student Info\n");

    printf("-> Teacher\n");
    printf("      5. Add Teacher\n");
    printf("      6. Delete Teacher\n");
    printf("      7. Show Teacher Count\n");
    printf("      8. Get Teacher Info\n");

    printf("\n      0. Exit\n");

    printf("Enter an Item number (0-8): ");
    scanf(" %d", &answer);
    clearBuffer();

    //=========== Process Selection ===============
    clearTerm();

    switch (answer) {
    case 0:
      printf("Exiting program. Goodbye!\n");
      return 0;
    case 1:
      addStudent();
      break;
    case 2:
      deleteStudent();
      break;
    case 3:
      showStudentCount();
      break;
    case 4:
      getStudentInfo();
      break;
    case 5:
      addTeacher();
      break;
    case 6:
      deleteTeacher();
      break;
    case 7:
      showTeacherCount();
      break;
    case 8:
      getTeacherInfo();
      break;
    default:
      break;
    }

    if (answer < 0 || answer > 8) {
      printf("Invalid option! Please try again.\n");
    }

    printf("\nPress Enter to continue...");
    char temp[5];
    fgets(temp, 5, stdin);

  } while (answer != 0);

  return 0;
}
