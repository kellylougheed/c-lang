/************************************************
* filename: largest.c
* Exercise: Module 5, Exercise 4
* Name: Kelly Lougheed
* Date Created: November 15, 2017
*
* Description: Takes in ten integers and prints
* the largest of them.
*************************************************/

#include <stdio.h>
#define SIZE 10

int largest(int * arr);

int main(void) {
  int numbers[SIZE];
  // Store ten integers in the array
  printf("Enter ten integers: ");
  scanf("%d %d %d %d %d %d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4], &numbers[5], &numbers[6], &numbers[7], &numbers[8], &numbers[9]);
  int largest_num = largest(numbers);
  printf("The largest number is %d\n", largest_num);
  return 0;
}

int largest(int * arr) {
  int largest_num = arr[0];
  // Loop through all elements of the array to find the largest
  for (int i = 1; i < SIZE; i++) {
    if (arr[i] > largest_num) {
      largest_num = arr[i];
    }
  }
  return largest_num;
}
