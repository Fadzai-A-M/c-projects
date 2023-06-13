#include <stdio.h>

int main()
{
    int num;
    int counter = 1;
    
    printf("Enter a positive number\n");
    scanf("%d", &num);
    
    if (num > 0)
    {
        while (counter <= num)
        
        {
            if(counter % 2 == 0)
            {
                printf("%d", counter);
            }
            
        counter++;
            
        }
    }
    
    else
    {
        printf("Error: Please enter a positive number");
    }
}
