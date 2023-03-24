// HỌC C CÙNG MÌNH
// Bài 46 : So sánh hai chuỗi hàm strcmp
/*
- Nếu kết quả là 1 thì chuỗi một lớn hơn chuỗi hai
- Nếu kết quả là 0 thì hai chuỗi bằng nhau
- Nếu kết quả là -1 thì chuỗi một nhỏ hơn chuỗi hai
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char Name_1[50], Name_2[50];
    printf("nhap ten 1 : ");
    fgets(Name_1, sizeof(Name_1), stdin);
    printf("nhap ten 2 : ");
    fgets(Name_2, sizeof(Name_2), stdin);
    printf("\nKet qua sau khi so sanh la : %d", strcmp(Name_1, Name_2));
    return 0;
}