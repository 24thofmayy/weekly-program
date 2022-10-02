//จงเขียนโปรแกรมเพื่อรับข้อความ 1 ข้อความแล้วให้โปรแกรมแสดงผลลัพธ์ว่ามีตัวอักษรตัวพิมพ์ใหญ่กี่ตัว ตัวพิมพ์เล็กกี่ตัว
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int c=0,s=0;
    printf("Input: ");
    scanf("%s",str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            c = c+1;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            s = s+1;
        }   
    }
    printf("Capital letters: %d\n",c);
    printf("Small letters: %d",s);

    return 0;
}