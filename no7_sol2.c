#include <stdio.h>

int main() {
    int a , b , c;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    if (a - b >= 0 && a - c >= 0) 
    {
        printf("the greatest number is %d",a);
    }
    else if (b - a >= 0 && b - c >= 0)
    {
        printf("the greatest number is %d",b);
    }
    else if (c - a >= 0 && c - b >= 0)
    {
        printf("the greastest number is %d",c);
    }
    else
    {
        printf("error");
    }
    
    return 0;
}