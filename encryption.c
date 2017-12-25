/************************************************
* filename: encryption.c
* Exercise: Module 3, Exercise 5
* Name: Kelly Lougheed
* Date Created: October 30, 2017
*
* Description: This program encrypts a sentence
* by removing all the spaces and changing all
* the vowels to z.
*************************************************/

#include "stdio.h"
int main(void) {
  char ch; // Character entered by user

  printf("Enter a sentence to be encrypted: ");

  ch = getchar();
  // Take in characters up until a period
  while (ch != '.') {
    switch(ch) {
      // Replace vowels with the letter 'Z'
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
        putchar('Z');
		break;
      // Ignore spaces
      case ' ':
        break;
      // Print all other characters
      default:
        putchar(ch);
        break;
    }
    ch = getchar();
  }
  printf("\n");

  return 0;
}
