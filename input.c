/************************************************
* filename: input.c
* Exercise: Module 3, Exercise 4
* Name: Kelly Lougheed
* Date Created: October 30, 2017
*
* Description: This program reads input until the
* # character and then reports the number of
* spaces, new lines, and all other characters.
*************************************************/

#include <stdio.h>
#include <ctype.h>
#define STOP '#'
int main(void) {
  char c; // Current character entered by user
  int n_spaces = 0; // Initialize count for spaces
  int n_lines = 0; // Initialize count for new lines
  long n_chars = 0L; // Initialize count for all characters

  printf("Enter text (# to terminate):\n");
  // Take in input until '#' encountered
  while ((c = getchar()) != STOP) {
    // Increment the character count
    n_chars++;
    if (isspace(c)) // Check for a space
      n_spaces++;
    if (c == '\n') // Check for a new line
      n_lines++;
  }

  printf("\nspaces = %d, lines = %d, characters = %ld\n", n_spaces, n_lines, n_chars);

  return 0;
}
