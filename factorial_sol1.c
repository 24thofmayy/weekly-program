#include <stdio.h>
unsigned long long int factorial (int n)
{
    unsigned long long int fac = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        fac *= i;
    }
    printf("%llu",fac);
}
int main() {
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("Factorial of %d is ",num);
    factorial(num);
    return 0;
}

