#include <stdio.h>

int max(int num1, int num2);

int main() 
{
    int num1, num2, maximum, minimum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max(num1, num2);
    return 0;
}

int max(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("Maximum = %d",num1 );
    }
    else if (num2 > num1)
    {
        printf("Maximum = %d",num2);
    }
}
