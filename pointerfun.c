/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 3
 * Title:			Pointer fun
 * Author:	  Wallinger Marc
 * ----------------------------------------------------------
 * Description:
 * Exercises for pointers (call by ref, val, ...)
 * ----------------------------------------------------------
*/
#include <stdio.h>

void print_integers(int int_value, int* int_pointer)
{
  printf("Got an integer value %d and an address to an integer with value %d", int_value, *int_pointer);
}

int main(int argc, char const *argv[]) {
  int int_value = 34;
  int* int_pointer = &int_value;

  print_integers(int_value, int_pointer);
  return 0;
}
