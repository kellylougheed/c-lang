#include "stdio.h"

char strcpy(char dest[], const char src[]);
char * strcpy2(char * dest, const char * src);

int main(void) {
  char source[10] = "Testing";
  char destination[10];
  strcpy(destination, source);
  //printf("%s", source);
  printf("%s", destination);
  return 0;
}

char strcpy(char dest[], const char src[]) {
  for (int i = 0; src[i] != '\0'; i++) {
    dest[i] = src[i];
  }
  return dest;
}

char * strcpy2(char * dest, const char * src) {
  for (int j = 0; src[j] != '\0'; j++) {
    dest[j] = src[j];
  }
  return dest;
}
