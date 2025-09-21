#include <stdio.h>
#include <string.h>
#include <ctype.h>

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


void libSwapCase(char str[]) {

    for (int i =0; str[i] != '\0' ; i++) {
        if (isupper(str)) {
            str[i] = tolower(str[i]);
        } else {
            str[i] = toupper(str[i]);
        }
    }
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

// TODO
char maxFrqChar(char str[]) {

  int chars[256] = {0};

  for (int i = 0; str[i] != '\0'; i++) {
    chars[(int)str[i]]++;
  }

  int maxFreq = 0;
  char maxChar;

  for (int i = 0; i < 256; i++) {
    if (chars[i] > maxFreq) {
      maxFreq = chars[i];
      maxChar = (char)i;
    }
  }

  return maxChar;
}


void RmSpace(char str[]) {
    char newStr[strlen(str) +1];
    int  newStrlen = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            newStr[newStrlen] = str[i];
            newStrlen++;
        }
    }

    newStr[newStrlen] = '\0';

    strcpy(str, newStr);
}


void rmSpace(char str[]) {
    int write_index = 0;

    for (int i =0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[write_index] = str[i];
            write_index++;
        }
    }

    str[write_index] = '\0';
}
