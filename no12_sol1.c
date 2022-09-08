#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a >= b && a >= c) 
    {
        if (b >= c)
        {
            printf("%d and %d",a,b);
        }
        else if (c >= b)
        {
            printf("%d and %d",a,c);
        }
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            printf("%d and %d",b,a);
        }
        else if (c >= a)
        {
            printf("%d and %d",b,c);
        }
    }
    else if (c >= a && c >= b)
    {
        if (a >= b)
        {
            printf("%d and %d",c,a);
        }
        else if (b >= a)
        {
            printf("%d and %d",c,b);
        }
    }
    return 0;
}