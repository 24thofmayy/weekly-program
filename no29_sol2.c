#include <stdio.h>

int main() {
    float sum = 0,x;
    for(int i = 1; i <= 10; i++)
    {
        x = 0;
        printf("Student Number %d : ",i);
        scanf("%f",&x);
        x /= 10;
        sum += x;       
    }
    printf("Average height : %.3f",sum);
    return 0;
}