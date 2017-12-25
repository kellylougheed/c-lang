/************************************************
* filename: prime.c
* Exercise: Module 3, Exercise 3
* Name: Kelly Lougheed
* Date Created: October 30, 2017
*
* Description: This program determines if a user-
* entered integer is prime. If not, it provides
* one of the integer's divisors.
*************************************************/

#include <stdio.h>
#include <stdbool.h>
int main(void) {
  unsigned long num; // Number entered by user
  unsigned long div; // Potential divisors
  unsigned long divisor; // Actual divisor, if one is found
  bool isPrime; // Whether or not the number is prime

  printf("Enter an integer to be tested if a prime number: ");
  while (scanf("%lu", &num) == 1) {
    // Set isPrime to true until it is proven false
    // Potential divisors are two through the square root of the number
    for (div = 2, isPrime = true; (div * div) <= num; div++) {
      // If the number is evenly divisible by div
      if (num % div == 0) {
        // Store the divisor and mark it as not prime
        divisor = div;
        isPrime = false;
      }
    }

    if (isPrime)
      printf("The number is a prime\n");
    else
      printf("The number is not prime because it is divisible by %lu\n", divisor);
  }
  return 0;
}
