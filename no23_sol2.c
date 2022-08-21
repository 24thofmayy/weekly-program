#include <stdio.h>
int main() {
    int n , i = 0;
    printf("Enter number :");
    scanf("%d",&n);

   while ( i < n )
   {
    for (int j = 0; j < n; j++)
    {
        if (j == 0 || i == 0 || j == n-1 || i == n-1)
        {
            printf("*");
        }
        else
        {
        printf(" ");
        }
    }
    printf("\n");
    i += 1;
   }
 return 0;
}