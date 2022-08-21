//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นจำนวนเท่ากับตัวเลขที่รับเข้ามา
#include <stdio.h>
int main() {
    int n,i = 0;
    printf("Enter number :");
    scanf("%d",&n);

    while (i < n)
    {
        printf("*");
        i += 1;
    }
    
    return 0;
}
