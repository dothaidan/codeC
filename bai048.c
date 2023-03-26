// HỌC C CÙNG MÌNH
// Bài 48: Nối hai chuỗi trong C sử dụng hàm strcat
// và tự xây dựng hàm nối 2 chuỗi
#include <stdio.h>
#include <string.h>
// Chúng ta tự xây dựng hàm xem như thế nào nhé
// ham noi chuoi 
void my_strcat(char str_1[], char str_2[])
{
    // lay do dai hai chuoi
    size_t len1 = strlen(str_1);
    size_t len2 = strlen(str_2);
    // vong lap noi hai chuoi
    for(int i=len1; i<len1+len2; i++)
    {
        str_1[i] = str_2[i-len1];
    }
    // sau khi noi xong thi them ki tu '\0' de biet noi chuoi xong
    str_1[len1+len2] = '\0';
}
int main ()
{
    // khai bao 2 chuoi
    char str_1[50] = "Hello ", str_2[50] = "World";
    printf("str_1 = %s", str_1);
    printf("\nstr_2 = %s", str_2);
    // ham strcat co san trong C
    //printf("\nSau khi noi 2 chuoi : %s", strcat(str_1, str_2));

    // goi ham my_strcat
    my_strcat(str_1, str_2);
    printf("\nSau khi noi chuoi : %s", str_1);
    return 0;
}