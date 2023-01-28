// HỌC C CÙNG MÌNH
// Bài 17: Giải phương trình bậc 2 ax^2 + bx + c = 0
#include <stdio.h>
#include <math.h>
#include <stdlib.h> // thư viện đổi màu chữ

// chương trình chính
int main()
{
	// đổi màu chữ
	system("color 6");
	// khai báo biến
	float a, b, c, x1, x2, delta;
	// nhập dữ liệu
	printf("nhap he so a :");
	scanf("%f", &a);
	printf("nhap he so b :");
	scanf("%f", &b);
	printf("nhap he so c :");
	scanf("%f", &c);
	// xử lí
	delta = pow(b, 2) - 4 * a * c;
	if (a == 0)
	{
		printf("khong tinh duoc, a phai khac 0!");
	}
	else
	{
		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("\nphuong trinh co hai nghiem phan biet x1 = %.2f , x2 = %.2f", x1, x2);
		}
		else if (delta == 0)
		{
			x1 = -b / (2 * a);
			printf("\nphuong trinh co nghiem kep x1 = x1 = %.2f", x1);
		}
		else
		{
			printf("\nphuong trinh vo nghiem !");
		}
	}

	return 0;
}