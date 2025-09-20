#include <ctype.h>
#include <stdio.h>
#include <string.h>

void slice(char str[], int n, int m) {

  char slicedStr[(m - n + 1) + 1];

  int j = 0;

  for (int i = n; i <= m; i++, j++) {
    slicedStr[j] = str[i];
  }

  slicedStr[j] = '\0';

  puts(slicedStr);
}

int countVowels(char str[]) {
  int count = 0, i = 0;

  while (str[i] != '\0') {
    switch (tolower(str[i])) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      count++;
      break;
    }
    i++;
  }
  return count;
}

int isPresent(char str[], char n) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == n) {
      return 1;
    }
  }
  return 0;
}

void swapCase(char str[]) {

  char newStr[strlen(str) + 1];
  int diff = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      diff = (str[i] - 'A');
      newStr[i] = 'a' + diff;
    } else if (str[i] >= 'a' && str[i] <= 'z') {
      diff = str[i] - 'a';
      newStr[i] = 'A' + diff;
    } else {
      newStr[i] = str[i];
    }
  }

  newStr[strlen(str)] = '\0';

  strcpy(str, newStr);
}

void upperVowels(char str[]) {

  int diff = 0;

  for (int i = 0; str[i] != '\0'; i++) {

    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u') {

      diff = (str[i] - 'a');
      str[i] = 'A' + diff;
    }
  }
}

void chgVowelCase(char str[]) {

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u') {

      // str[i]  = toupper(str[i]);
      str[i] = str[i] - 32;
    }
  }
}


//TODO
char getHighestFrqChar(char str[], char *ch) {

  // Initialize array of all extended ASCII chars (0 to 255)
  // & put all count to 0
  int chars[256] = {0};

  // Increase the count of the ascii equivalent index by 1
  for (int i = 0; str[i] != '\0'; i++) {
    chars[(int)str[i]]++;
  }

  //  get the highest index number in the chars array
  int maxCount = 0;
  char resultChar;

  for (int i = 0; i < 256; i++) {
      // Check if the count of the current character is a new max
      if (chars[i] > maxCount) {
          maxCount = chars[i];      // Update the max count
          resultChar = (char)i;
      }
  }
  return resultChar;
}



int main() {
  char str[] = "deepapp";
  char maxChar;
  getHighestFrqChar(str, &maxChar);
  return 0;
}
