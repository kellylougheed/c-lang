/************************************************
* filename: pointers.c
* Exercise: Module 4, Exercise 5
* Name: Kelly Lougheed
* Date Created: November 6, 2017
*
* Description: This program assigns the maximum
* value of two numbers to both numbers.
*************************************************/

#include <stdio.h>

void max_value(int * pointer1, int * pointer2);

int main(void) {
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  int * pointer_a = &a;
  int * pointer_b = &b;
  max_value(pointer_a, pointer_b);
  printf("Both values are now: %d %d\n", a, b);
  return 0;
}

// Makes the values at both pointers the larger value
void max_value(int * pointer1, int * pointer2) {
  if (*pointer1 < *pointer2) {
    *pointer1 = *pointer2;
  } else if (*pointer1 > *pointer2) {
    *pointer2 = *pointer1;
  }
}
