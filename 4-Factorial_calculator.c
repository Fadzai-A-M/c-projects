#include <stdio.h>

int main() 
{
   int num;
   int counter = 1;
   int factorial = 1;
  
  printf("Enter a posivtive number\n");
  scanf("%d", &num);
  
  while(counter <= num)
  {
      factorial *= counter;
      counter++;
  }
  printf("The factorial number of %d is %d", num, factorial);
}
