// HỌC C CÙNG MÌNH
// IN RA MÀN HÌNH, HÌNH TRÁI TIM CÓ KÍCH THƯỚC MxN=6x7
#include <stdio.h> 
// viết hàm
void Heart(int M, int N)
{
    int i,j;
    // khởi tạo 2 vòng lặp for lồng nhau
    for(i=1; i<7; i++)
    {
        for(j=1; j<=7; j++)
        {
            // điều kiện 
            if(!((i==1 && (j==1 || j==4 || j==7))
            || (i==4 && (j==1 || j==7))
            || (i==5 && (j<=2 || j>=6))
            || (i==6 && (j<=3 || j>=5))))
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
// chương trình chính
int main ()
{
    int M=6, N=7;
    // lời gọi hàm 
    Heart(M,N);
    return 0;
}