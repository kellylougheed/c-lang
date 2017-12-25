/************************************************
* filename: negative.c
* Exercise: Module 4, Exercise 4
* Name: Kelly Lougheed
* Date Created: November 6, 2017
*
* Description: This program counts how many
* negative numbers are input by the user.
*************************************************/

#include <stdio.h>

int negative_count(signed long int num1, signed long int num2);

int main(void) {
  signed long int a, b;
  printf("Enter two integers of data type 'long': ");
  scanf("%ld %ld", &a, &b);
  int negatives = negative_count(a, b);
  printf("Number of negative numbers entered: %d\n", negatives);
  return 0;
}

// Given two inputs, counts how many numbers are negative
int negative_count(signed long int num1, signed long int num2) {
  int count = 0;
  if (num1 < 0) {
    count++;
  }
  if (num2 < 0) {
    count++;
  }
  return count;
}
