#include <stdio.h>

int main() 
{
    int num;
    int counter = 1;
    int sum = 0;
    
    printf("Enter a postitive number\n");
    scanf("%d", &num);
    while( counter <= num)
    {
        sum += counter;
        counter++;
    }
    
    printf("%d", sum);
}
