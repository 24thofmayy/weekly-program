#include <stdio.h>

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum = num1 + num2;
    int diff = num1 - num2;
    int pro = num1*num2;
    int quo = num1/num2;
    printf("SUM : %d\n",sum);
    printf("DIFFERRENCE : %d\n",diff);
    printf("PRODUCT : %d\n",pro);
    printf("QUOTIENT : %d",quo);
    return 0;
}