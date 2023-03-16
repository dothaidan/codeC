// HỌC C CÙNG MÌNH
// Bài 44 : Nhập xuất chuỗi
#include <stdio.h>
#include <string.h> // thu vien chuoi trong C

int main()
{
    char fullName[50];
    // printf("Nhap Ten Cua Ban : ");
    // scanf("%s", fullName);
    // printf("Ten Cua Ban : %s", fullName);
    printf("Nhap Ten Cua Ban : ");
    fgets(fullName, sizeof(fullName), stdin); // nhap chuoi
    printf("Ten Ban La : ");
    puts(fullName); // in chuoi ra man hinh gom ca ki tu khoang trang
    return 0;
}