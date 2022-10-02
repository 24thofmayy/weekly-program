//จงเขียนโปรแกรมเพื่อรับข้อความ 1 ข้อความแล้วให้โปรแกรมแสดงผลลัพธ์ว่ามีตัวอักษรตัวพิมพ์ใหญ่กี่ตัว ตัวพิมพ์เล็กกี่ตัว
#include<stdio.h>
#include<string.h>

int main(){
    char *p,str[100];
    int c = 0,s = 0;
    printf("Input: ");
    scanf("%s",str);
    p = str;
    for (int i = 0; i < strlen(str); i++)
    {
        if (*(p+i)-32 >= 'A' && *(p+i) - 32 <= 'Z')
        {
            s = s + 1;
        }
        else if (*(p+i)+32 >= 'a' && *(p+i) + 32 <= 'z')
        {
            c = c + 1;
        }
    }
    printf("Capital letters: %d\n",c);
    printf("Small letters: %d",s);
    return 0;
}