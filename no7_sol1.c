#include <stdio.h>

int main() {
    int a , b , c;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    if (a,c > b) 
    {
        if (a > c)
        {
            printf("the greatest number is %d",a);
        }
        else
        {
            printf("the greatest number is %d",c);
        }
        
    }
    else
    {
        printf("the greastest number is %d",b);
    }
    
    return 0;
}