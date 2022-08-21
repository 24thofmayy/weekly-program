//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา
#include <stdio.h>
int main() {
    int n , i = 0 , j;
    printf("Enter number :");
    scanf("%d",&n);

   while ( i < n )
   {
    for (int j = 0; j < n; j++)
    {
        printf("*");
    }
    printf("\n");
    i += 1;
   }

    return 0;
}