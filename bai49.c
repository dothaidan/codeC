// HOCJ C CÙNG MÌNH 
// Bài 48: Coppy hai chuỗi sử dụng hàm strcpy
// và tự xây dựng hàm để coppy chuỗi 
#include <stdio.h>
#include <string.h>
// chúng ta thưr xây dựng hàm nhé
// hàm coppy chuỗi 
void my_strcpy(char str1[], char str2[])
{
    // lay do dai chuoi str2
    size_t len2 = strlen(str2);
    for(int i=0; i<=len2; i++)
    {
        str1[i] = str2[i];
    }
    str1[len2] = '\0';
}
int main ()
{
    // khai bao 2 chuoi
    char str1[50] = "Hello World", str2[50];
    printf("\nTruoc khi coppy : ");
    printf("\n str1 = %s", str1);
    printf("\n str2 = %s", str2);
    printf("\nSau khi coppy : ");
    // ham strcpy co san trong C
    //printf("\n str2 = %s", strcpy(str2, str1));

    // goi ham 
    my_strcpy(str2,str1);
    printf("\n str2 = %s", str2);
    return 0;
}