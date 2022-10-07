/*ให้นักศึกษารับข้อมูลเก็บใน array ขนาด 10 ช่องแล้วแสดงค่าตัวเลขต่างๆ ใน array และแสดงผลต่างของผลรวมค่าที่ตำแหน่งเป็นเลขคี่ 
กับผลรวมของค่าที่ตำแหน่งเป็นเลขคู่(โดยคิดว่าตำแหน่งที่ 1 คือตัวเลขตัวแรก) ดังตัวอย่างการทำงานของโปรแกรม (แสดง Output หลังจากใส่ค่า Input) (Level 3)*/

#include <stdio.h>

int main(){
    int num[10];
    int sumodd = 0,sumeven = 0;
    for(int i = 1; i <= 10; i++)
    {
        printf("number in position %d: ",i);
        scanf("%d",&num[i]);
    }
    for(int j = 1; j <= 10; j++)
    {
        if(num[j] % 2 == 0)
        {
            sumeven += num[j];
        }
        else
        {
            sumodd += num[j];
        }
    }
    printf("Result: %d",sumodd - sumeven);
    return 0;
}
