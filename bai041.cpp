// HỌC C CÙNG MÌNH
// Bài 41: Hoán đổi giá trị giữa hai dòng và cột
// trong mảng 2 chiều
#include <stdio.h>
int m, n, a[100][100];

// function enterArray
void enterArray(int x[][100], int &m, int &n)
{
    do
    {
        printf("Enter Row : ");
        scanf("%d", &m);
        printf("Enter Column : ");
        scanf("%d", &n);
    } while (m <= 0 || m > 100 || n <= 0 || n > 100);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" Enter Element [%d][%d] : ", i, j);
            scanf("%d", &x[i][j]);
        }
    }
}

// function printArray
void printArray(int x[][100], int m, int n)
{
    printf("\nValues Array : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\t%d", x[i][j]);
        }
        printf("\n");
    }
}

// function swapRowArray
void swapRowArray(int x[][100], int &m, int n)
{
    int rowOne, rowTwo;
    printf("Enter The Line To Be Swapped : ");
    scanf("%d", &rowOne);
    printf("Enter The Line To BE Swapped : ");
    scanf("%d", &rowTwo);
    for (int i = 0; i < m; i++)
    {
        int temp = x[rowOne][i];
        x[rowOne][i] = x[rowTwo][i];
        x[rowTwo][i] = temp;
    }
}

// function swapColumnArray
void swapColumnArray(int x[][100], int m, int &n)
{
    int columnOne, columnTwo;
    printf("Enter The Column To Be Swapped : ");
    scanf("%d", &columnOne);
    printf("Enter The Column To BE Swapped : ");
    scanf("%d", &columnTwo);
    for (int i = 0; i < n; i++)
    {
        int temp = x[i][columnOne];
        x[i][columnOne] = x[i][columnTwo];
        x[i][columnTwo] = temp;
    }
}
int main()
{
    // function call
    enterArray(a, m, n);
    printArray(a, m, n);
    swapRowArray(a, m, n);
    printArray(a, m, n);
    swapColumnArray(a, m, n);
    printArray(a, m, n);
    return 0;
}