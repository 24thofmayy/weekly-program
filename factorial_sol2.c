#include <stdio.h>

unsigned long long int factorial (int n);
int main() {
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("Factorial of %d is %llu",num,factorial (num));
    return 0;
}
unsigned long long int factorial (int n)
{
    if (n >= 1)
        return n*factorial(n-1);
    else
        return 1;
}

