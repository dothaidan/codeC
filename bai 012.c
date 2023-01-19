// HỌC C CÙNG MÌNH
// BÀI 12 :Tính tổng  và tích tất cả các “ ước số” của số nguyên dương n
#include <stdio.h>
#include <conio.h>
#include <math.h>

// chương trình chính
int main()
{
    // khai báo và nhập n
    int n;
    // nhập n>0, n<=0 nhập lại
    do
    {
        printf("\nnhap vao so n : ");
        scanf("%d", &n);
        // điều kiện nhập lại
        if (n <= 0)
        {
            printf("nhap lai n(n>0)");
        }
    } while (n <= 0);
    // khai báo i duyệt các ước
    int i;
    // khai báo biến tổng và tích
    int tong = 0, tich = 1;
    // dùng vòng lặp for hoặc while để tính
    printf("uoc cua %d la ", n);
    for (i = 1; i <= n; i++)
    {
        // kiểm tra điều kiện rồi tính
        if (n % i == 0)
        {
            // in ra các ước
            printf("%d", i);
            // tính tổng và tích
            tong += i;
            tich *= i;
        }
    }
    // in ra tỏng và tích
    printf("\ntong=%d", tong);
    printf("\ntich=%d", tich);
    getch(); // dừng màn hình
    return 0;
}
