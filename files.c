/************************************************
* filename: files.c
* Exercise: Module 6, Exercise 1
* Name: Kelly Lougheed
* Date Created: November 24, 2017
*
* Description: This program prints the contents
* of files listed as arguments on the command
* line.
*************************************************/

#include "stdio.h"

int main(int argc, char * argv[]) {
  FILE * fp;
  char ch;

  if (argc == 1) {
    printf("Please add files to open.\n");
  } else {
      for (int count = 1; count < argc; count++) {
      char * filename = argv[count];
      printf("\nSTART OF FILE %s\n", filename);
      fp = fopen(argv[count], "r");
      while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
      }
      fclose(fp);
      printf("\nEND OF FILE %s\n", filename);
    }
  }
  return 0;
}
