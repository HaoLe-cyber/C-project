#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "function.c"

int main(int argc, char const *argv[])
{
    system ("color b");
    char inputAccount[51];
    char inputPassword[21];

    printf("\n\t\t\t\t\t\t|=======CHUONG TRINH QUAN LY SINH VIEN - GIAO VIEN - LOP HOC=======|\n");
    printf("\t\t\t\t\t\t|\t\t  ========XAC THUC TAI KHOAN=======\t\t   |\n");
    printf("\t\t\t\t\t\t|==================================================================|\n");
    do
    {
        printf("\n\t\t\t\t\t\t Username: "); // Tài khoản admin của em là: adminaccount
        scanf("%s", inputAccount);
        printf("\n\t\t\t\t\t\t Password: ");
        inputHiddenPassword(inputPassword, 21);// Mật khẩu tài khoản admin của em là: 123456789

        if (!authenticateAdmin(inputAccount, inputPassword))
        {
            printf("\n\t\t\t\t\t\t\t\t +===============================================+");
            printf("\n\t\t\t\t\t\t\t\t |Tai khoan hoac mat khau sai! Vui long nhap lai!|");
            printf("\n\t\t\t\t\t\t\t\t +===============================================+");
        }

    } while (!authenticateAdmin(inputAccount, inputPassword));

    printf("\n\t\t\t\t\t\t\t\t|=======DANG NHAP THANH CONG=======|\n\n");
    printf("\t\t\t============================================================================================================================\n\n");
    mainMenu();
    return 0;
}