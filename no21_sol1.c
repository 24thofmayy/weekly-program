//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา
#include <stdio.h>
int main() {
    int n;
    printf("Enter number :");
    scanf("%d",&n);

   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < n; j++)
    {
        printf("*");
    }
    printf("\n");
   }

    return 0;
}