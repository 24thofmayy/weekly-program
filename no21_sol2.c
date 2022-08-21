//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา
#include <stdio.h>
int main() {
    int n , i = 0 , j = 0;
    printf("Enter number :");
    scanf("%d",&n);

   while ( i < n )
   {
    while ( j < n ) 
    {
        printf("*");
        j += 1;
    }
    printf("\n");
    i += 1;
   }
 return 0;
}