//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นจำนวนเท่ากับตัวเลขที่รับเข้ามา
#include <stdio.h>
int main() {
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    
    return 0;
}
