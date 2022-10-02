/*ให้นักศึกษารับข้อมูลเก็บใน arrayขนาด 10 ช่องแล้วแสดงค่าตัวเลขต่างๆ ใน array และแสดงตัวเลขที่เลขข้างเคียงเป็นเลขคี่ 
ตัวอย่างการทำงานของโปรแกรม (แสดง Output หลังจากใส่ค่า Input) (Level 3)*/

#include <stdio.h>

int main() {
    int num[10];
    int res[10]; 
    int j = 1;
    printf("Data in array: ");
    scanf("%d %d %d %d %d %d %d %d %d %d",&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],&num[7],&num[8],&num[9],&num[10]);
    
    for(int i = 1 ; i <= 10 ; i++)
    {
        if(num[i-1] % 2 == 1 && num[i+1] % 2 == 1)
        {
            res[j] = num[i];
            j += 1;
        }
    }
    printf("Result: ");
    for(int k = 1; k <= (j-1); k++)
    {
        printf("%d ",res[k]);
    }
    return 0;
}