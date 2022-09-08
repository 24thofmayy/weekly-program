#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a + b >= b + c && a + b >= a + c) 
    {
        printf("%d and %d",a,b);
    }
    else if (b + c >= a + b && b + c >= a + c)
    {
        printf("%d and %d",b,c);
    }
    else if (a + c >= a + b && a + c >= b + c)
    {
        printf("%d and %d",a,c);
    }
    return 0;
}