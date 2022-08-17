#include <stdio.h>

int main() {
    int a , b , c;
    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);

    c = (2*a) + b;
    printf("2a + b = %d\n",c);
    c = (a*a*a*a*a) + (a*a*a*a) + (2*a*a*a) + (3*a*a) + (4*a) + 3;
    printf("a^5 + a^4 + 2a^3 + 3a^2 + 4a + 3 = %d\n",c);
    c = 2 + (3*a);
    printf("2 + 3a = %d",c);
    return 0;
}