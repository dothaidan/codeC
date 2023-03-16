/*Trò chơi tài xỉuxỉu
- người chơi lựa chọn tài hoặc xỉu sau đó nhập số tiền đặt cược
- sau khi đạt cược số tiền hiện tại = tiền - số tiền cược
  + nếu người chơi chọn tài mà kết quả ra xỉu thì số tiền = số tiền - tiền cược -> thua
  + nếu người chơi chọn đúng thì số tiền = số tiền + tiền cược -> thắng
-nếu ketqua = 4 - 10 => Xiu
-nếu  ketqua = 11 - 17 => Tai
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

// hàm kiểm tra tuổi của người chơi
int checkAgeUser()
{
    int yourAge;
    printf("\nNhap Vao Tuoi Cua Ban (Tuoi >= 18) : ");
    scanf("%d", &yourAge);
    getchar();
    if (yourAge < 18)
    {
        printf("\nBan Khong Du Tuoi De Choi Tro Nay !");
        exit(0);
    }
}

// hàm này sẽ random các con số trong mặt xúc sắc (random từ 1 đến 6)
int random(int minN, int maxN)
{
    return minN + rand() % (maxN + 1 - minN);
}

// hàm xử lí kết quả random
int result_random()
{
    int diceOne, diceTwo, diceThree;
    srand((int)time(0));
    // vòng lặp xử lí xúc xắc 1
    for (int i = 1; i < 6; ++i)
    {
        diceOne = random(1, 6);
        diceOne %= 10;
    }
    printf("\n->> Con Xuc Xac 1 :  %d ", diceOne);
    // vòng lặp xử lí xúc xắc 2
    for (int i2 = 1; i2 < 6; ++i2)
    {
        diceTwo = random(1, 6);
        diceTwo %= 10;
    }
    printf("\n->> Con Xuc Xac 2 :  %d ", diceTwo);
    // vòng lặp xử lí xúc xắc 3
    for (int i3 = 1; i3 < 6; ++i3)
    {
        diceThree = random(1, 6);
        diceThree %= 10;
    }
    printf("\n->> Con Xuc Xac 3 :  %d ", diceThree);

    // trả về kết quả là tổng sau khi gieo 3 con xúc sắc
    return diceOne + diceTwo + diceThree;
}

// hàm xủa lí người chơi đặt cược và trả về kết quả thắng hoặc thua
void processing()
{
    int diceOne, diceTwo, diceThree;
    int money = 5000000, tienCuoc;
    int option, luaChon;
    do
    {
        int a = 5, c = 175; // biến in ra các kí tự trong bảng mã ASCII
        for (int i = 0; i < 45; i++)
        {
            Sleep(50);
            printf("%c", a);
        }
        // Menu để người chơi chọn
        printf("\n================Moi Ban Chon=================");
        printf("\n\t(1). Nhan 1 De Chon Tai ");
        printf("\n\t(2). Nhan 2 De chon Xiu ");
        printf("\n\t(0). Thoat");
        printf("\n=============================================");
        printf("\nSo Tien Hien Tai Cua Ban La : %d ", money);
        printf("\n>>> Moi Ban Nhap Lua Chon : ");
        scanf("%d", &option);
        // kiểm tra lựa chọn của người chơi
        switch (option)
        {
        case 1:
        {
            printf("\nNhap So Tien Cuoc(Toi Thieu 10000) : ");
            scanf("%d", &tienCuoc);
            if (tienCuoc > money || tienCuoc < 10000)
            {
                printf("\n=>> Ban Khong Du Tien Choi !");
                exit(0);
            }
            else
            {
                printf("\n=>> So Tien Con Lai Sau Khi Cuoc : %d", money - tienCuoc);
                printf("\n");
                for (int i = 0; i < 45; i++)
                {
                    Sleep(50);
                    printf("%c", a);
                }
                printf("\n=>> BAN DA VAO GAME !\n");
            }
            for (int i = 0; i < 45; i++)
            {
                Sleep(50);
                // printf("\n");
                printf("%c", a);
            }
            printf("\nBan Da Cuoc Tai Vui Long Cho Ket Qua : ");
            // tgian chờ kết quả
            for (int i = 0; i < 5; i++)
            {
                Sleep(300);
                printf("%c", c);
            }
            int result = result_random();
            if (result >= 11 && result <= 17)
            {
                printf("\n=>> Ket Qua : Tai");
                if (option == 1)
                {
                    printf("\n=>> Chuc Mung Ban Da Thang ");
                    money += tienCuoc;
                    printf("\n=>> So Tien Hien Tai Cua Ban La : %d", money);
                }
            }
            else if (result >= 4 && result <= 10)
            {
                printf("\n=>> Ket Qua : Xiu");
                printf("\n=>> Ban Da Thua, Chuc Ban May Man Lan Sau ");
                money -= tienCuoc;
                printf("\n=>> So Tien Hien Tai Cua Ban La : %d", money);
                if (money == 0)
                {
                    exit(0);
                }
            }
            else
            {
                printf("\nBi Lua Roi Nha !");
            }
            break;
        }
        case 2:
        {
            printf("\nNhap So Tien Cuoc(Toi Thieu 10000) : ");
            scanf("%d", &tienCuoc);
            if (tienCuoc > money || tienCuoc < 10000)
            {
                printf("\n=>> Ban Khong Du Tien Choi !");
                exit(0);
            }
            else
            {
                printf("\n=>> So Tien Con Lai Sau Khi Cuoc : %d", money - tienCuoc);
                printf("\n");
                for (int i = 0; i < 45; i++)
                {
                    Sleep(50);
                    printf("%c", a);
                }
                printf("\n=>> BAN DA VAO GAME !\n");
            }
            for (int i = 0; i < 45; i++)
            {
                Sleep(50);
                // printf("\n");
                printf("%c", a);
            }
            printf("\nBan Da Cuoc Xiu Vui Long Cho Ket Qua : ");
            // tgian chờ kết quả
            for (int i = 0; i < 5; i++)
            {
                Sleep(300);
                printf("%c", c);
            }

            int result = result_random();
            if (result >= 4 && result <= 10)
            {
                printf("\n=>> Ket Qua : Xiu");
                if (option == 2)
                {
                    printf("\n=>> Chuc Mung Ban Da Thang  ");
                    money += tienCuoc;
                    printf("\n=>> So Tien Hien Tai Cua Ban La : %d\n", money);
                }
            }
            else if (result >= 11 && result <= 17)
            {
                printf("\n=>> Ket Qua : Tai");
                printf("\n=>> Ban Da Thua, Chuc Ban May Man Lan Sau ");
                money -= tienCuoc;
                printf("\n=>> So Tien Hien Tai Cua Ban La : %d", money);
                if (money == 0)
                {
                    exit(0);
                }
            }
            else
            {
                printf("\nBi Lua Roi Nha !\n");
            }
            break;
        }
        case 0:
        {
            exit(0);
        }
        default:
            printf("\n=>> Ban Chon Khong Dung, Vui Long Chon Lai !");
        }
        printf("\n");
        for (int i = 0; i < 45; i++)
        {
            Sleep(50);
            printf("%c", a);
        }
        printf("\n=>>Nhap so bat ki de tiep tuc. Nhap 0 de thoat : ");
        scanf("%d", &luaChon);
    } while (luaChon != 0);
}

// hàm bản quyền 
void byCopyright()
{
    int ki_tu = 64;
    printf("%c BY COPYRIGHT : PHAM TIEN DUC", ki_tu);
    printf("\n");
    for (int i = 0; i < 45; i++)
    {
        int a = 5;
        Sleep(50);
        printf("%c", a);
    }
    printf("\nChoi Game Qua 180p Moi Ngay Co Anh Huong Cho Suc Khoe !");
}

// hàm chính 
int main()
{
    system("color 2"); // thay đổi màu sắc chữ trên màn hình console
    // lời gọi hàm 
    byCopyright();
    checkAgeUser();
    processing();
    return 0;
}