// HỌC C CÙNG MÌNH
// Bài 24: Viết hàm đệ quy chuyển từ hệ
// thập phân sang nhị phân 
#include <stdio.h>
#include <math.h>
// ham nhi phan 
int printNhi_Phan(int n)
{
    printf("he nhi phan : %d", printNhi_Phan(n));
    if(n==0)
    {
        return 0;
    }
    else 
    {
        int r = n % 2 ;
        printNhi_Phan(n/2);
        printf("%d", r);
    }
}
int main ()
{
    int n;
    do 
    {
        printf("nhap n (n>0) : ");
        scanf("%d", &n);
    }while(n<0);
    printNhi_Phan(n);
    return 0;
}
