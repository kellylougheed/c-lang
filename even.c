/************************************************
* filename: even.c
* Exercise: Module 5, Exercise 1
* Name: Kelly Lougheed
* Date Created: November 15, 2017
*
* Description: Displays the five largest even
* numbers from an array of all even numbers from
* 1 to 100.
*************************************************/

#include <stdio.h>

int main(void) {
  int even_numbers[50];
  int i, j;
  // Calculate the number of elements in the array
  int array_size = sizeof(even_numbers)/sizeof(even_numbers[0]);
  // Populate the array with all even numbers from 1 to 100
  for (i = 0, j = 2; i < array_size; i++, j += 2) {
    even_numbers[i] = j;
  }
  printf("The top five even numbers are: ");
  // Print the last five numbers from the array
  for (int k = array_size - 1; k > array_size - 6; k--) {
    printf("%d ", even_numbers[k]);
  }
  printf("\n");
  return 0;
}
