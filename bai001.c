// HỌC C CÙNG MÌNH NHÉ
// Bài 1: Tính tổng 1+2+3+4+...+n
#include <stdio.h> // khai báo thư viên nhập xuất
#include <conio.h> // khai báo thư viện dùng màn hình
#include <math.h>  // khai báo thư viện chứa các hàm toán học
int main()
{
    // khai báo biến n là các phần tử
    int n;
    int i = 0; // biến i để duyệt các phần tử tính tổng
    // câu lệnh nhập vào n
    printf("nhap vao so n : ");
    scanf("%d", &n);
    int tong = 0;  // khai báo biến tổng giá trị lúc đầu =0
    while (i <= n) // có thể dùng for nhé các bạn
    {
        tong += i; // tổng = tổng + i
        i++;       // sau mỗi lần tính tổng xong sẽ tăng i lên 1
    }
    for(i; i<=n; i++)
    {
        tong+=i;
    }
    // giờ in ra tong là xong nhé !!
    printf("tong = %d", tong);
    getch(); // câu lênhj dừng màn hình
    return 0;
}
