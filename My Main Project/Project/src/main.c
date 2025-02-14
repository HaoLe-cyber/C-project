#include <stdio.h>
#include <stdlib.h>
#include "function.c"

int main(int argc, char const *argv[])
{
    char inputAccount[51];
    char inputPassword[21];

    printf("\n\t\t\t|=======CHUONG TRINH QUAN LY SINH VIEN - GIAO VIEN - LOP HOC=======|\n");
    printf("\t\t\t|\t\t  ========XAC THUC TAI KHOAN=======\t\t   |\n");
    printf("\t\t\t|==================================================================|\n");
    do
    {
        printf("\n\t\t\t Username: ");
        scanf("%s", inputAccount);
        printf("\n\t\t\t Password: ");
        scanf("%s", inputPassword);

        if (!authenticateAdmin(inputAccount, inputPassword))
        {
            printf("\n\t\t\t\t\t +===============================================+");
            printf("\n\t\t\t\t\t |Tai khoan hoac mat khau sai! Vui long nhap lai!|");
            printf("\n\t\t\t\t\t +===============================================+");
        }

    } while (!authenticateAdmin(inputAccount, inputPassword));

    printf("\n\t\t\t\t\t\t|=======DANG NHAP THANH CONG=======|\n\n");
    mainMenu();
    return 0;
}