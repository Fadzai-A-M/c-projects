#include <stdio.h>

int main()
{
    int num;
    int counter = 1;
   
    printf("Enter a postive number\n");
    scanf("%d", &num);
    
   if (num > 0)
    {
      while( counter <= num)
      {
          printf("%d\n", counter);
          counter++;
      }
    } 
    
    else 
     {
         printf("Error: Please enter a postive number");
     }
}
