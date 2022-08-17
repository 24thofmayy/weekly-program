#include <stdio.h>

int main() {
    int a , b , c;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    if (a >= b && a >= c) 
    {
        printf("the greatest number is %d",a);
    }
    else if (b >= a && b >= c)
    {
        printf("the greatest number is %d",b);
    }
    else if (c >= a && c >= b)
    {
        printf("the greastest number is %d",c);
    }
    else
    {
        printf("error");
    }
    
    return 0;
}