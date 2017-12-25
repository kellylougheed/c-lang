/************************************************
* filename: struct.c
* Exercise: Module 6, Exercise 2
* Name: Kelly Lougheed
* Date Created: November 25, 2017
*
* Description: This program takes in information
* about an account from the user and then prints
* it.
*************************************************/

#include <stdio.h>
#include <string.h>
#define MAXADDRESS 50
#define MAXCITYSTATE 25
#define MAXNAME 25

char * s_gets(char * st, int n);

struct account {
  int number;
  char street_address[MAXADDRESS];
  char city_state[MAXCITYSTATE];
  int zip_code;
  float balances;
  float credit_limit;
  char name[MAXNAME];
};

int main(void) {

  struct account new_acct;

  printf("Please enter your account number: ");
  scanf("%d", &new_acct.number);
  // Get rid of leftover newline character
  while (getchar() != '\n') {
    continue;
  }
  printf("Please enter your street address: ");
  s_gets(new_acct.street_address, MAXADDRESS);
  printf("Please enter your city and state: ");
  s_gets(new_acct.city_state, MAXCITYSTATE);
  printf("Please enter your zip code: ");
  scanf("%d", &new_acct.zip_code);
  printf("Please enter your balance: ");
  scanf("%f", &new_acct.balances);
  printf("Please enter your credit limit: ");
  scanf("%f", &new_acct.credit_limit);
  // Get rid of leftover newline character
  while (getchar() != '\n') {
    continue;
  }
  printf("Please enter your name: ");
  s_gets(new_acct.name, MAXNAME);

  printf("\nAccount number: %d\n", new_acct.number);
  printf("Street address: %s\n", new_acct.street_address);
  printf("City and state: %s\n", new_acct.city_state);
  printf("Zip code: %d\n", new_acct.zip_code);
  printf("Balance: %.2f\n", new_acct.balances);
  printf("Credit limit: %.2f\n", new_acct.credit_limit);
  printf("Name: %s\n", new_acct.name);

  return 0;
}

char * s_gets(char * st, int n) {

  // Initialize new string to hold the user's answer
  char * return_val;
  int i = 0;

  // Get input from keyboard
  return_val = fgets(st, n, stdin);
  // Get input while there is no newline or null value
  if (return_val) {
    while (st[i] != '\n' && st[i] != '\0') {
      i++;
    }
    // Terminate the string at a carriage return
    if (st[i] == '\n') {
      st[i] = '\0';
  	// Otherwise, keep adding characters to the string
    } else {
      while (getchar() != '\n') {
        continue;
      }
    }
  }
  return return_val;
}
