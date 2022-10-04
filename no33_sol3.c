#include<stdio.h>

int main(){
    int num[10];
    printf("Data in array:");
    scanf("%d %d %d %d %d %d %d %d %d %d",&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],&num[7],&num[8],&num[9],&num[10]);
    printf("Result:");
    for (int i = 0; i < 9; i++)
    {
        if (num[i+1]%2 == 1 && (num[i-1]-num[i+1])%2 == 0)
        {
            printf("%d ",num[i]);
        }
        
    }
    return 0;
}