#include <stdio.h>

int main() {
    int ave[10];
    float sum = 0;
    printf("Student Number 1 : ");
    scanf("%d",&ave[0]);
    printf("Student Number 2 : ");
    scanf("%d",&ave[1]);
    printf("Student Number 3 : ");
    scanf("%d",&ave[2]);
    printf("Student Number 4 : ");
    scanf("%d",&ave[3]);
    printf("Student Number 5 : ");
    scanf("%d",&ave[4]);
    printf("Student Number 6 : ");
    scanf("%d",&ave[5]);
    printf("Student Number 7 : ");
    scanf("%d",&ave[6]);
    printf("Student Number 8 : ");
    scanf("%d",&ave[7]);
    printf("Student Number 9 : ");
    scanf("%d",&ave[8]);
    printf("Student Number 10 : ");
    scanf("%d",&ave[9]);
    //scanf("%d %d %d %d %d %d %d %d %d %d",&ave[0],&ave[1],&ave[2],&ave[3],&ave[4],&ave[5],&ave[6],&ave[7],&ave[8],&ave[9]);
    for(int i = 0; i < 10; i++)
    {
        sum += ave[i];       
    }
    printf("Average height : %.3f",sum/10);
    return 0;
}