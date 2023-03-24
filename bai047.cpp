// HỌC C CÙNG MÌNH
// Bài 47: Kiểm tra n xem có phải tổng của hai
// số nguyên tố nhập vào không
/* ý tưởng
- nhập vào tổng
- dùng for để kiểm tra xem hai số nhập vào có
2 số nguyên tố không
- nếu 1 trong hai số không phải số nguyên tố thì
dừng chương trình
*/
#include <stdio.h>
// ham kiem tra so nguyen to
int kiemTraSNT(int &a, int &b)
{
    printf("Nhap vao so a, so b: ");
    scanf("%d%d", &a, &b);
    // kiem tra xem co phai so nguyen to khong
    if ((a <= 1) || (b <= 1))
        return 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    for (int j = 2; j < b; j++)
    {
        if (b % j == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int sum, a, b;
    printf("Nhap vao tong : ");
    scanf("%d", &sum);
    int kt = kiemTraSNT(a, b); // goi ham kiemtraSNT
    if (kt == 0)
    {
        printf("Ban nhap khong hop le !");
    }
    else
    {
        int sum_NT = a + b;
        if (sum == sum_NT)
        {
            printf("%d la tong cua hai so nguyen to %d va %d ", sum, a, b);
        }
        else
        {
            printf("%d la khong tong cua hai so nguyen to %d va %d ", sum, a, b);
        }
    }
    return 0;
}