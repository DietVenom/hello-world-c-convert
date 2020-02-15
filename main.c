#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char* argv[])
{
  printf("Hello world\nPlease enter an integer to convert it to a double: ";
  int myData;
  scanf("%d", &myData);
  double myDouble = (double) myData;
  printf("%d", myDouble);
  return 0;
}
