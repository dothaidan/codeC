// HỌC C CÙNG MÌNH
// Bài 50: Viết chương trình viết hoa chữ cái
// đầu tiên trong chuỗi
#include <stdio.h>
#include <string.h>

// ham chuyen chu dau viet hoa
void chuDauVietHoa(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if ((i == 0) || (i > 0 && str[i - 1] == 32))
        {
            if (str[i] >= 97 && str[i] <= 122)
                str[i] -= 32;
        }
        else
        {
            if (str[i] >= 65 && str[i] <= 90)
                str[i] += 32;
        }
    }
}
int main()
{
    char str[50];
    printf("Nhap vao chuoi : ");
    fgets(str, sizeof(str), stdin);

    // goi ham
    chuDauVietHoa(str);
    printf("Sau khi chuyen : %s", str);
    return 0;
}
