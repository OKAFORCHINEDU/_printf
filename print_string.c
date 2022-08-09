#include "main.h"

//This function is used to print out string characters 

int print_string(char *string) {
  int i, count = 0; // what counts does is to keep track of how many characters we have printed

  for (i = 0; string[i] != '\0'; i++) {
    /*--- The for loop will loop through the strings and once it is not a null which represents the end of the string it will print and also count ---*/
    count += _putchar(string[i]);
  }

  return (count); // We are returning count anytime the function is called
}