// HỌC C CÙNG MÌNH
// Bài 23: Viết hàm đệ quy tính giai thừa 
// và tính số fibonaci 
#include <stdio.h>
#include <math.h>
// hàm tính giai thừa
int Giai_Thua(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else 
    {
        return n*Giai_Thua(n-1);
    }
} 
// hàm tính đệ quy 
int tinh_Fibonaci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else 
    {
        return tinh_Fibonaci(n-1) + tinh_Fibonaci(n-2);
    }
}
int main ()
{
    int n;
    do 
    {
        printf("nhap vao so n (n>0)  :");
        scanf("%d", &n);
    }while(n<0);
    // goi ham giai thua
    printf("So %d! = %d", n, Giai_Thua(n));
    printf("\nSo Fibonaci(%d) = %d", n, tinh_Fibonaci(n));
    return 0;
}