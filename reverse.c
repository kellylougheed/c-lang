/************************************************
* filename: reverse.c
* Exercise: Module 5, Exercise 5
* Name: Kelly Lougheed
* Date Created: November 23, 2017
*
* Description: This program takes in a string and
* reverses it.
*************************************************/

#include <stdio.h>
#include <string.h>
#define SIZE 40

void reverse(char * arr);

int main(void) {
  char str[SIZE];
  printf("Enter a string: ");
  // Read string until newline
  scanf("%[^\n]s", str);
  reverse(str);
  printf("String reversed: %s\n", str);
  return 0;
}

void reverse(char * str) {
  // Loop through the last half of the string
  for (int i = strlen(str)-1, j = 0; i >= strlen(str)/2; i--, j++) {
    // Swap characters in the first half with characters in the last half
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}
