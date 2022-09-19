#include <stdio.h>
 
int largest(int num[2])
{
    int i;
    int max = num[0];
    for (i = 1; i < 2; i++)
        if (num[i] > max)
            max = num[i];
 
    return max;
}
 
int main()
{
    int num[2] ;
    printf("Enter two numbers: ");
    scanf("%d %d",&num[0],&num[1]);
    if (num[0] == num[1])
    {
        printf("Both numbers are equal.");
    }
    else
    {
        printf("Maximum = %d", largest(num));
    }
    return 0;
}