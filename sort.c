/************************************************
* filename: sort.c
* Exercise: Module 5, Exercise 3
* Name: Kelly Lougheed
* Date Created: November 15, 2017
*
* Description: Takes in ten integers and prints
* them in a sorted order.
*************************************************/

#include <stdio.h>
#define SIZE 10

void bubble_sort(int * arr);
void print_array(int * arr);
void swap_values(int * arr, int index1, int index2);

int main(void) {
  int numbers[SIZE];
  printf("Enter ten integers: ");
  // Store ten integers in the array
  scanf("%d %d %d %d %d %d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4], &numbers[5], &numbers[6], &numbers[7], &numbers[8], &numbers[9]);
  // Sort and print the sorted array
  bubble_sort(numbers);
  return 0;
}

void bubble_sort(int * arr) {
  int j, k;
  int done = 0;
  while (done == 0) {
    // Assume done is true unless it is later assigned false
    done = 1;
    for (j = 0, k = 1; k < SIZE; j++, k++) {
      // Compare elements side-by-side in the array
      if (arr[j] > arr[k]) {
        // Swap elements if they are out of order
        swap_values(arr, j, k);
        // If values must be swapped, the sort is not done and assigned false
        done = 0;
      }
    }
  }
  printf("\nSorted numbers: ");
  print_array(arr);
  printf("\n");
}

void print_array(int * arr) {
  for (int i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  }
}

void swap_values(int * arr, int index1, int index2) {
  int temp = arr[index1];
  arr[index1] = arr[index2];
  arr[index2] = temp;
}

