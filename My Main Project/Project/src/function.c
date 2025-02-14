#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "../include/datatype.h"

// Hàm menu chính (Main Menu)
void mainMenu()
{
    int choice;
    do
    {
        printf("\t+-------------------PTIT--------------------+\n");
        printf("\t| 1. Quan ly sinh vien                      |\n");
        printf("\t| 2. Quan ly giao vien                      |\n");
        printf("\t| 3. Quan ly lop hoc                        |\n");
        printf("\t| 0. Thoat                                  |\n");
        printf("\t+-------------------------------------------+\n");
        printf("\tNhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            studentManagementMenu();
            break;
        case 2:
            teacherManagementMenu();
            break;
        case 3:
            classManagementMenu();
            break;
        case 0:
            printf("\n\t\t\t=======KET THUC CHUONG TRINH=======\n");
        }
    } while (choice != 0);
};

// Hàm menu quản lý sinh viên (Management Student Menu)
void studentManagementMenu()
{
    int choice;
    do
    {
        printf("\t+-------------------SINH VIEN--------------------+\n");
        printf("\t| 1. Xem danh sach sinh vien                     |\n");
        printf("\t| 2. Them moi sinh vien                          |\n");
        printf("\t| 3. Chinh sua thong tin sinh vien               |\n");
        printf("\t| 4. Xoa sinh vien                               |\n");
        printf("\t| 5. Tim kiem sinh vien                          |\n");
        printf("\t| 6. Sap xep danh sach sinh vien theo ten        |\n");
        printf("\t| 0. Quay lai                                    |\n");
        printf("\t+------------------------------------------------+\n");
        printf("\tNhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            showStudentList(); // Hàm hiển thị danh sách sinh viên
            break;
        case 2:
            addNewStudent(); // Hàm thêm mới sinh viên
            break;
        case 3:
            editStudentInfo(); // Hàm chỉnh sửa thông tin sinh viên
            break;
        case 4:
            deleteStudent(); // hàm xóa sinh viên
            break;
        case 5:
            searchStudent(); // Hàm tìm kiếm sinh viên
            break;
        case 6:
            sortStudentListMenu(); // Hàm menu thao tác sắp xếp danh sách sinh viên
            break;
        case 0:
            printf("\n\t\t-----Quay lai Menu chinh-----\n");
            break;
        default:
            break;
        }
    } while (choice != 0);
};

// Hàm menu quản lý giáo viên (Management Teacher Menu)
void teacherManagementMenu()
{
    int choice;
    do
    {
        printf("\t+-------------------GIAO VIEN--------------------+\n");
        printf("\t| 1. Xem danh sach giao vien                     |\n");
        printf("\t| 2. Them moi giao vien                          |\n");
        printf("\t| 3. Chinh sua thong tin giao vien               |\n");
        printf("\t| 4. Xoa giao vien                               |\n");
        printf("\t| 5. Tim kiem giao vien                          |\n");
        printf("\t| 6. Them lop cho giao vien phu trach            |\n");
        printf("\t| 0. Quay lai                                    |\n");
        printf("\t+------------------------------------------------+\n");
        printf("\tNhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            showTeacherList();
            break;
        case 2:
            addNewTeacher();
            break;
        case 3:
            editTeacherInfo();
            break;
        case 4:
            deleteTeacher();
            break;
        case 5:
            searchTeacher();
            break;
        case 6:
            addTeacherToClass();
            break;
        case 0:
            printf("\n\t\t-----Quay lai Menu chinh-----\n");
            break;
        default:
            break;
        }
    } while (choice != 0);
};

// Hàm menu quản lý lớp học (Management Class Menu)
void classManagementMenu()
{
    int choice;
    do
    {
        printf("\t+-------------------LOP HOC---------------------+\n");
        printf("\t| 1. Xem danh sach lop hoc                      |\n");
        printf("\t| 2. Them moi lop hoc                           |\n");
        printf("\t| 3. Chinh sua thong tin lop hoc                |\n");
        printf("\t| 4. Xoa lop hoc                                |\n");
        printf("\t| 5. Xem chi tiet lop hoc                       |\n");
        printf("\t| 6. Sap xep danh sach lop hoc                  |\n");
        printf("\t| 0. Quay lai                                   |\n");
        printf("\t+-----------------------------------------------+\n");

        printf("\n\tNhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            showClassList();
            break;
        case 2:
            addNewClass();
            break;
        case 3:
            editClassInfo();
            break;
        case 4:
            deleteClass();
            break;
        case 5:
            classDetailMenu();
            break;
        case 6:
            sortClassListMenu();
            break;
        case 0:
            printf("\n\t\t-----Quay lai Menu chinh-----\n");
            break;
        default:
            break;
        }

    } while (choice != 0);
};

// Hàm menu nhỏ của chức năng quản lý chi tiết lớp học
void classDetailMenu()
{
    int choice;
    do
    {
        printf("\t+-------------------MENU CHI TIET LOP HOC---------------------+\n");
        printf("\t| 1. Hien thi danh sach chi tiet lop hoc                      |\n");
        printf("\t| 2. Them sinh vien vao lop hoc                               |\n");
        printf("\t| 3. Xoa sinh vien khoi lop hoc                               |\n");
        printf("\t| 0. Quay lai                                                 |\n");
        printf("\t+-------------------------------------------------------------+\n");

        printf("\n\tNhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            showClassDetail();
            break;
        case 2:
            addStudentToClass();
            break;
        case 3:
            deleteStudentFromClass();
            break;
        case 0:
            printf("\n\t\t-----Quay lai Menu quan ly lop hoc-----\n");
            break;
        }
    } while (choice != 0);
};

// Hàm menu lựa chọn thứ tự sắp xếp danh sách sinh viên
void sortStudentListMenu()
{
    int sortOption;
    do
    {
        printf("\t+-------------------SAP XEP SINH VIEN--------------------+\n");
        printf("\t| 1. Sap xep theo thu tu A-Z                             |\n");
        printf("\t| 2. Sap xep theo thu tu Z-A                             |\n");
        printf("\t| 0. Huy sap xep quay lai menu quan ly                   |\n");
        printf("\t+--------------------------------------------------------+\n");
        printf("\tNhap lua chon cua ban: ");
        scanf("%d", &sortOption);
        switch (sortOption)
        {
        case 1:
            sortStudentListAZ(); // Hàm sắp xếp theo thứ tự A-Z
            break;
        case 2:
            sortStudentListZA(); // Hàm sắp xếp theo thứ tự Z-A
            break;
        case 0:
            printf("\n\t\t------------Huy sap xep------------\n\n");
            break;
        default:
            break;
        }
    } while (sortOption != 0);
};

// Hàm sắp xếp danh sách sinh viên theo thứ tự A-Z
void sortStudentListAZ()
{
    struct Student students[100]; // Khai báo danh sách sinh viên
    int countStudentAmount = 0;

    FILE *file = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Student_Data.bin", "rb");
    if (file == NULL)
    {
        printf("\t\t=========> Khong mo duoc file <=========\n");
        return;
    }

    // Đọc dữ liệu từ file vào mảng students
    while (fread(&students[countStudentAmount], sizeof(struct Student), 1, file) == 1)
    {
        countStudentAmount++;
    }
    fclose(file);

    // Sắp xếp A-Z theo tên sinh viên
    for (int i = 0; i < countStudentAmount - 1; i++)
    {
        for (int j = i + 1; j < countStudentAmount; j++)
        {
            if (strcmp(students[i].studentName, students[j].studentName) > 0)
            {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // Hiển thị bảng đã được sắp xếp
    printf("\t\t\t\t\t\t\t\t\t[-----------------------Danh sach sinh vien da sap xep-----------------------]\n\n");
    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+------+\n");
    printf("\t|  ID  |        NAME        | AGE  | SEX  | PHONE NUM |                       EMAIL                      |                ADDRESS                 | BIRTHDAY |              MAJOR           |STATUS|\n");
    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+------+\n");

    for (int i = 0; i < countStudentAmount; i++)
    {
        printf("\t|%-6s|%-20s|%-6d|%-6s|%-11s|%-50s|%-40s|%-10s|%-30s|%-6s|\n",
               students[i].studentID,
               students[i].studentName,
               students[i].studentAge,
               students[i].studentSex ? "Female" : "Male",
               students[i].studentPhoneNumber,
               students[i].studentEmail,
               students[i].studentAddress,
               students[i].studentBirthDay,
               students[i].studentMajor,
               students[i].studentStatus ? "Active" : "Inactive");
    }

    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+------+\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t[---------------------------End List---------------------------]\n");
    printf("\n");
};

// Hàm sắp xếp danh sách sinh viên theo thứ tự Z-A
void sortStudentListZA()
{
    struct Student students[100]; // Khai báo danh sách sinh viên
    int countStudentAmount = 0;

    FILE *file = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Student_Data.bin", "rb");
    if (file == NULL)
    {
        printf("\t\t=========> Khong mo duoc file <=========\n");
        return;
    }

    // Đọc dữ liệu từ file vào mảng students
    while (fread(&students[countStudentAmount], sizeof(struct Student), 1, file) == 1)
    {
        countStudentAmount++;
    }
    fclose(file);

    // Sắp xếp Z-A theo tên sinh viên
    for (int i = 0; i < countStudentAmount - 1; i++)
    {
        for (int j = i + 1; j < countStudentAmount; j++)
        {
            if (strcmp(students[i].studentName, students[j].studentName) < 0)
            {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // Hiển thị bảng đã được sắp xếp
    printf("\t\t\t\t\t\t\t\t\t[-----------------------Danh sach sinh vien da sap xep-----------------------]\n\n");
    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+------+\n");
    printf("\t|  ID  |        NAME        | AGE  | SEX  | PHONE NUM |                       EMAIL                      |                ADDRESS                 | BIRTHDAY |              MAJOR           |STATUS|\n");
    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+------+\n");

    for (int i = 0; i < countStudentAmount; i++)
    {
        printf("\t|%-6s|%-20s|%-6d|%-6s|%-11s|%-50s|%-40s|%-10s|%-30s|%-6s|\n",
               students[i].studentID,
               students[i].studentName,
               students[i].studentAge,
               students[i].studentSex ? "Female" : "Male",
               students[i].studentPhoneNumber,
               students[i].studentEmail,
               students[i].studentAddress,
               students[i].studentBirthDay,
               students[i].studentMajor,
               students[i].studentStatus ? "Active" : "Inactive");
    }

    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+------+\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t[---------------------------End List---------------------------]\n");
    printf("\n");
};

// Hàm menu lựa chọn thứ tự sắp xếp danh sách lớp học
void sortClassListMenu()
{
    int sortOption;
    do
    {
        printf("\t+-------------------SAP XEP SINH VIEN--------------------+\n");
        printf("\t| 1. Sap xep theo thu tu A-Z                             |\n");
        printf("\t| 2. Sap xep theo thu tu Z-A                             |\n");
        printf("\t| 0. Huy sap xep quay lai menu quan ly                   |\n");
        printf("\t+--------------------------------------------------------+\n");
        printf("\tNhap lua chon cua ban: ");
        scanf("%d", &sortOption);
        switch (sortOption)
        {
        case 1:
            sortClassListAZ(); // Hàm sắp xếp theo thứ tự A-Z
            break;
        case 2:
            sortClassListZA(); // Hàm sắp xếp theo thứ tự Z-A
            break;
        case 0:
            printf("\n\t\t------------Huy sap xep------------\n\n");
            break;
        default:
            break;
        }
    } while (sortOption != 0);
};

// Hàm sắp xếp danh sách lớp học theo thứ tự A-Z
void sortClassListAZ()
{
    struct Class classes[100];
    int countClassAmount = 0;

    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Class_Data.bin", "rb");
    if (inputFile == NULL)
    {
        printf("\t\t=========> Khong mo duoc file <=========\n");
        return;
    }

    // Đọc dữ liệu từ file vào mảng classes
    while (fread(&classes[countClassAmount], sizeof(struct Class), 1, inputFile) == 1)
    {
        countClassAmount++;
    }
    fclose(inputFile);

    // Sắp xếp A-Z theo tên lớp học
    for (int i = 0; i < countClassAmount - 1; i++)
    {
        for (int j = i + 1; j < countClassAmount; j++)
        {
            if (strcmp(classes[i].className, classes[j].className) > 0)
            {
                struct Class temp = classes[i];
                classes[i] = classes[j];
                classes[j] = temp;
            }
        }
    }

    // Hiển thị bảng đã được sắp xếp
    printf("\t\t\t[---------------------Danh sach lop hoc---------------------]\n\n");
    printf("\t+------+--------------------------------------------------+------------------------------+------+\n");
    printf("\t|  ID  |                       NAME                       |             MAJOR            |STATUS|\n");
    printf("\t+------+--------------------------------------------------+------------------------------+------+\n");

    for (int i = 0; i < countClassAmount; i++)
    {
        printf("\t|%-6s|%-50s|%-30s|%-6s|\n",
               classes[i].classID,
               classes[i].className,
               classes[i].classMajor,
               classes[i].classStatus ? "Active" : "Inactive");
    }

    printf("\t+------+--------------------------------------------------+------------------------------+------+\n");
    printf("\t\t\t[---------------------------End List---------------------------]\n");
    printf("\n");
};

// Hàm sắp xếp danh sách lớp học theo thứ tự Z-A
void sortClassListZA()
{
    struct Class classes[100];
    int countClassAmount = 0;

    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Class_Data.bin", "rb");
    if (inputFile == NULL)
    {
        printf("\t\t=========> Khong mo duoc file <=========\n");
        return;
    }

    // Đọc dữ liệu từ file vào mảng classes
    while (fread(&classes[countClassAmount], sizeof(struct Class), 1, inputFile) == 1)
    {
        countClassAmount++;
    }
    fclose(inputFile);

    // Sắp xếp Z-A theo tên lớp học
    for (int i = 0; i < countClassAmount - 1; i++)
    {
        for (int j = i + 1; j < countClassAmount; j++)
        {
            if (strcmp(classes[i].className, classes[j].className) < 0)
            {
                struct Class temp = classes[i];
                classes[i] = classes[j];
                classes[j] = temp;
            }
        }
    }

    // Hiển thị bảng đã được sắp xếp
    printf("\t\t\t[---------------------Danh sach lop hoc---------------------]\n\n");
    printf("\t+------+--------------------------------------------------+------------------------------+------+\n");
    printf("\t|  ID  |                       NAME                       |             MAJOR            |STATUS|\n");
    printf("\t+------+--------------------------------------------------+------------------------------+------+\n");

    for (int i = 0; i < countClassAmount; i++)
    {
        printf("\t|%-6s|%-50s|%-30s|%-6s|\n",
               classes[i].classID,
               classes[i].className,
               classes[i].classMajor,
               classes[i].classStatus ? "Active" : "Inactive");
    }

    printf("\t+------+--------------------------------------------------+------------------------------+------+\n");
    printf("\t\t\t[---------------------------End List---------------------------]\n");
    printf("\n");
};

// Kiểm tra cú pháp email hợp lệ
bool isValidEmail(char email[])
{
    char *at = strchr(email, '@');
    char *dot = strrchr(email, '.');
    return at && dot && at < dot && strlen(email) <= 50;
};

// Kiểm tra cú pháp số điện thoại (chỉ cho phép 10 số)
bool isValidPhoneNumber(char phoneNumber[])
{
    if (strlen(phoneNumber) != 10)
        return false;
    for (int i = 0; i < 10; i++)
    {
        if (!isdigit(phoneNumber[i]))
            return false;
    }
    return true;
};

// Kiểm tra tên (không chứa số hoặc ký tự đặc biệt)
bool isValidName(char name[])
{
    for (int i = 0; i < strlen(name); i++)
    {
        if (!isalpha(name[i]) && name[i] != ' ')
            return false;
    }
    return true;
};

// Hàm kiểm tra trùng lặp dữ liệu sinh viên
int checkDuplicateStudentInfo(char *IDToCheck, char *emailToCheck, char *phoneNumberToCheck)
{
    struct Student existingStudent;

    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Student_Data.bin", "rb");
    if (inputFile == NULL)
    {
        printf("\t=========> Khong mo duoc file du lieu sinh vien <=========\n");
        return 0;
    }

    while (fread(&existingStudent, sizeof(struct Student), 1, inputFile))
    {
        if (existingStudent.studentID == IDToCheck)
        {
            printf("\t\t=========> Ma sinh vien da ton tai <=========\n");
            fclose(inputFile);
            return 0; // ID đã tồn tại
        }

        if (strcmp(existingStudent.studentEmail, emailToCheck) == 0)
        {
            printf("\t\t=========> Email sinh vien da ton tai <=========\n");
            fclose(inputFile);
            return 0; // Email đã tồn tại
        }
        if (strcmp(existingStudent.studentPhoneNumber, phoneNumberToCheck) == 0)
        {
            printf("\t=========> So dien thoai sinh vien da ton tai <=========\n");
            fclose(inputFile);
            return 0; // Số điện thoại đã tồn tại
        }
    }

    fclose(inputFile);
    return 1; // Không có trùng lặp thông tin
};

// Hàm kiểm tra trùng lặp dữ liệu giáo viên
int checkDuplicateTeacherInfo(char *IDToCheck, char *emailToCheck, char *phoneNumberToCheck)
{
    struct Teacher existingTeacher;

    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Teacher_Data.bin", "rb");
    if (inputFile == NULL)
    {
        printf("\t=========> Khong mo duoc file du lieu sinh vien <=========\n");
        return 0;
    }

    while (fread(&existingTeacher, sizeof(struct Teacher), 1, inputFile))
    {
        if (existingTeacher.teacherID == IDToCheck)
        {
            printf("\t\t=========> Ma giao vien da ton tai <=========\n");
            fclose(inputFile);
            return 0; // ID đã tồn tại
        }

        if (strcmp(existingTeacher.teacherEmail, emailToCheck) == 0)
        {
            printf("\t\t=========> Email giao vien da ton tai <=========\n");
            fclose(inputFile);
            return 0; // Email đã tồn tại
        }
        if (strcmp(existingTeacher.teacherPhoneNumber, phoneNumberToCheck) == 0)
        {
            printf("\t=========> So dien thoai giao vien da ton tai <=========\n");
            fclose(inputFile);
            return 0; // Số điện thoại đã tồn tại
        }
    }

    fclose(inputFile);
    return 1; // Không có trùng lặp thông tin
};

// Hàm kiểm tra dữ liệu trùng lặp dữ liệu lớp học
int checkDuplicateClassInfo(char *IDToCheck, char *nameToCheck)
{
    struct Class existingClass;

    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Class_Data.bin", "rb");
    if (inputFile == NULL)
    {
        printf("\t=========> Khong mo duoc file du lieu lop hoc <=========\n");
        return 0;
    }

    while (fread(&existingClass, sizeof(struct Class), 1, inputFile))
    {
        if (existingClass.classID == IDToCheck)
        {
            printf("\t\t=========> Ma lop hoc da ton tai <=========\n");
            fclose(inputFile);
            return 0; // ID đã tồn tại
        }

        if (strcmp(existingClass.className, nameToCheck) == 0)
        {
            printf("\t\t=========> Ten cua lop hoc da ton tai <=========\n");
            fclose(inputFile);
            return 0; // Tên đã tồn tại
        }
    }

    fclose(inputFile);
    return 1; // Không có trùng lặp thông tin
};

// Hàm hiển thị danh sách sinh viên
void showStudentList()
{
    struct Student showStudentInfo;
    FILE *outputFile;

    outputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Student_Data.bin", "rb");
    if (outputFile == NULL)
    {
        printf("\t\t=========> File khong ton tai <=========\n");
        return;
    }

    // Kiểm tra kích thước file
    fseek(outputFile, 0, SEEK_END);
    long fileSize = ftell(outputFile);
    rewind(outputFile);

    if (fileSize == 0)
    {
        printf("\t=========> File khong co du lieu <=========\n\n");
        fclose(outputFile);
        return;
    }

    printf("\t\t\t\t\t\t\t\t\t[---------------------Danh sach sinh vien---------------------]\n\n");
    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+------+\n");
    printf("\t|  ID  |        NAME        | AGE  | SEX  | PHONE NUM |                       EMAIL                      |                ADDRESS                 | BIRTHDAY |              MAJOR           |STATUS|\n");
    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+------+\n");

    // Đọc từng dòng dữ liệu từ file
    while (fread(&showStudentInfo, sizeof(struct Student), 1, outputFile) == 1)
    {
        // In ra bảng nếu dữ liệu hợp lệ
        if (strlen(showStudentInfo.studentID) > 0) // Kiểm tra ID hợp lệ
        {
            printf("\t|%-6s|%-20s|%-6d|%-6s|%-11s|%-50s|%-40s|%-10s|%-30s|%-6s|\n",
                   showStudentInfo.studentID,
                   showStudentInfo.studentName,
                   showStudentInfo.studentAge,
                   showStudentInfo.studentSex ? "Female" : "Male",
                   showStudentInfo.studentPhoneNumber,
                   showStudentInfo.studentEmail,
                   showStudentInfo.studentAddress,
                   showStudentInfo.studentBirthDay,
                   showStudentInfo.studentMajor,
                   showStudentInfo.studentStatus ? "Active" : "Inactive");
        }
    }

    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+------+\n");

    fclose(outputFile);
    printf("\t\t\t\t\t\t\t\t\t[---------------------------End List---------------------------]\n");
    printf("\n");
};

// Hàm thêm mới sinh viên
void addNewStudent()
{
    struct Student newStudentInfo;
    FILE *inputFile;

    inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Student_Data.bin", "ab");
    if (inputFile == NULL)
    {
        printf("\t\t=========> Khong the mo file Student_Data.bin <=========\n");
        return;
    }

    strcpy(newStudentInfo.studentClassID, ""); // Gán giá trị ban đầu cho studentClassID để đảm bảo không bị chèn dữ liệu rác

    printf("Nhap vao ID cua sinh vien: ");
    scanf("%6s", newStudentInfo.studentID);
    getchar(); // Xóa ký tự xuống dòng còn lại sau scanf

    do
    {
        printf("Nhap vao ten cua sinh vien: ");
        fgets(newStudentInfo.studentName, sizeof(newStudentInfo.studentName), stdin);
        newStudentInfo.studentName[strcspn(newStudentInfo.studentName, "\n")] = '\0';
    } while (!isValidName(newStudentInfo.studentName));

    printf("Nhap vao tuoi cua sinh vien: ");
    scanf("%d", &newStudentInfo.studentAge);

    printf("Nhap vao gioi tinh cua sinh vien (0: Nam, 1: Nu): ");
    scanf("%d", &newStudentInfo.studentSex);
    getchar();

    do
    {
        printf("Nhap vao so dien thoai cua sinh vien: ");
        scanf("%11s", newStudentInfo.studentPhoneNumber);
        getchar();
    } while (!isValidPhoneNumber(newStudentInfo.studentPhoneNumber));

    do
    {
        printf("Nhap vao email cua sinh vien: ");
        scanf("%50s", newStudentInfo.studentEmail);
        getchar();
    } while (!isValidEmail(newStudentInfo.studentEmail));

    printf("Nhap vao dia chi cua sinh vien: ");
    fgets(newStudentInfo.studentAddress, sizeof(newStudentInfo.studentAddress), stdin);
    newStudentInfo.studentAddress[strcspn(newStudentInfo.studentAddress, "\n")] = '\0';

    printf("Nhap vao ngay sinh cua sinh vien (dd/mm/yyyy): ");
    scanf("%10s", newStudentInfo.studentBirthDay);
    getchar();

    printf("Nhap vao nganh hoc cua sinh vien: ");
    fgets(newStudentInfo.studentMajor, sizeof(newStudentInfo.studentMajor), stdin);
    newStudentInfo.studentMajor[strcspn(newStudentInfo.studentMajor, "\n")] = '\0';

    printf("Nhap vao trang thai cua sinh vien (0: Nghi hoc, 1: Dang hoc): ");
    scanf("%d", &newStudentInfo.studentStatus);

    if (!checkDuplicateStudentInfo(newStudentInfo.studentID, newStudentInfo.studentEmail, newStudentInfo.studentPhoneNumber))
    {
        printf("\n\t=========> Them sinh vien that bai do trung lap thong tin <=========\n");
    }
    else
    {
        size_t writeCount = fwrite(&newStudentInfo, sizeof(struct Student), 1, inputFile);
        if (writeCount == 1)
        {
            printf("\n\t==========> Them sinh vien thanh cong <==========\n");
        }
        else
        {
            printf("\n\t==========> Them sinh vien that bai <==========\n");
        }
    }

    fclose(inputFile);
};

// Hàm chỉnh sửa thông tin sinh viên giữ nguyên ID
void editStudentInfo()
{
    struct Student editStudentInfo;
    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Student_Data.bin", "rb+");
    if (!inputFile)
    {
        printf("\t\t=========> Khong the mo File <=========\n");
        return;
    }

    char IDToSearch[7];
    printf("Nhap vao ID sinh vien can chinh sua: ");
    scanf("%6s", IDToSearch);

    strcpy(editStudentInfo.studentClassID, ""); // Gán giá trị ban đầu cho studentClassID để đảm bảo không bị chèn dữ liệu rác
    int studentFound = 0;

    while (fread(&editStudentInfo, sizeof(struct Student), 1, inputFile))
    {
        if (strcmp(editStudentInfo.studentID, IDToSearch) == 0)
        {
            studentFound = 1;
            printf("Tim thay sinh vien: %s\n", editStudentInfo.studentID);

            // Cập nhật thông tin sinh viên
            do
            {
                printf("Nhap ten moi: ");
                getchar(); // Xóa ký tự xuống dòng còn lại
                fgets(editStudentInfo.studentName, sizeof(editStudentInfo.studentName), stdin);
                editStudentInfo.studentName[strcspn(editStudentInfo.studentName, "\n")] = '\0';
            } while (!isValidName(editStudentInfo.studentName));

            printf("Nhap tuoi moi: ");
            scanf("%d", &editStudentInfo.studentAge);

            printf("Nhap gioi tinh moi (0: Nam, 1: Nu): ");
            scanf("%d", &editStudentInfo.studentSex);

            do
            {
                printf("Nhap so dien thoai moi: ");
                scanf("%11s", editStudentInfo.studentPhoneNumber);
            } while (!isValidPhoneNumber(editStudentInfo.studentPhoneNumber));

            do
            {
                printf("Nhap email moi: ");
                scanf("%50s", editStudentInfo.studentEmail);
            } while (!isValidEmail(editStudentInfo.studentEmail));

            printf("Nhap dia chi moi: ");
            getchar();
            fgets(editStudentInfo.studentAddress, sizeof(editStudentInfo.studentAddress), stdin);
            editStudentInfo.studentAddress[strcspn(editStudentInfo.studentAddress, "\n")] = '\0';

            printf("Nhap ngay sinh moi (dd/mm/yyyy): ");
            scanf("%10s", editStudentInfo.studentBirthDay);

            printf("Nhap nganh hoc moi: ");
            getchar();
            fgets(editStudentInfo.studentMajor, sizeof(editStudentInfo.studentMajor), stdin);
            editStudentInfo.studentMajor[strcspn(editStudentInfo.studentMajor, "\n")] = '\0';

            printf("Nhap trang thai moi (0: Nghi hoc, 1: Dang hoc): ");
            scanf("%d", &editStudentInfo.studentStatus);

            if (!checkDuplicateStudentInfo(editStudentInfo.studentID, editStudentInfo.studentEmail, editStudentInfo.studentPhoneNumber))
            {
                printf("\n\t=========> Chinh sua sinh vien that bai do trung lap thong tin <=========\n");
            }
            else
            {
                // Ghi đè thông tin sinh viên
                fseek(inputFile, -sizeof(struct Student), SEEK_CUR);
                if (fwrite(&editStudentInfo, sizeof(struct Student), 1, inputFile) == 1)
                {
                    printf("\n\t=========> Cap nhat thong tin hoan tat <=========\n");
                }
                else
                {
                    printf("\n\t=========> Loi ghi du lieu vao File <=========\n");
                }
            }
            break;
        }
    }

    if (!studentFound)
    {
        printf("Khong tim thay sinh vien co ID %s.\n", IDToSearch);
    }

    fclose(inputFile);
};

// Hàm xóa sinh viên
void deleteStudent()
{
    struct Student deleteStudentInfo;
    char IDToDelete[7];
    printf("Nhap vao ID sinh vien can xoa: ");
    scanf("%6s", IDToDelete);

    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Student_Data.bin", "rb");
    if (inputFile == NULL)
    {
        printf("\t\t=========> Khong the mo File <=========\n");
        return;
    }

    FILE *tempFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Temp_Student_Data.bin", "wb");
    if (tempFile == NULL)
    {
        printf("\t\t=========> Khong the tao File xoa thong tin <=========\n");
        fclose(inputFile);
        return;
    }

    int studentFound = 0;

    while (fread(&deleteStudentInfo, sizeof(struct Student), 1, inputFile))
    {
        if (strcmp(deleteStudentInfo.studentID, IDToDelete) == 0)
        {
            studentFound = 1;
            printf("Tim thay sinh vien: %s\n", deleteStudentInfo.studentID);
            char confirm;
            printf("Ban co chac chan muon xoa sinh vien nay? (y/n): ");
            scanf(" %c", &confirm);
            if (confirm == 'y' || confirm == 'Y')
            {
                printf("\n\t=========> Xoa sinh vien thanh cong <=========\n");
                continue; // Bỏ qua ghi dòng này vào file tạm
            }
            else
            {
                printf("\n\t=========> Huy lenh xoa sinh vien <=========\n");
            }
        }
        // Ghi lại thông tin sinh viên không bị xóa vào file tạm
        fwrite(&deleteStudentInfo, sizeof(struct Student), 1, tempFile);
    }

    fclose(inputFile);
    fclose(tempFile);

    if (!studentFound)
    {
        printf("Khong tim thay sinh vien co ID %s.\n", IDToDelete);
        remove("D:\\Code C task\\My Main Project\\Project\\data\\Temp_Student_Data.bin");
    }
    else
    {
        if (remove("D:\\Code C task\\My Main Project\\Project\\data\\Student_Data.bin") == 0 &&
            rename("D:\\Code C task\\My Main Project\\Project\\data\\Temp_Student_Data.bin", "D:\\Code C task\\My Main Project\\Project\\data\\Student_Data.bin") == 0)
        {
            printf("\n\t=========> Cap nhat file thanh cong sau khi xoa <=========\n");
        }
        else
        {
            printf("\n\t=========> Loi cap nhat file sau khi xoa <=========\n");
        }
    }
};

// Hàm tìm kiếm sinh viên
void searchStudent()
{
    struct Student searchStudentInfo;
    char nameToSearch[21];
    printf("Nhap vao ten sinh vien can tim: ");
    getchar(); // Xóa ký tự xuống dòng còn lại
    fgets(nameToSearch, sizeof(nameToSearch), stdin);
    nameToSearch[strcspn(nameToSearch, "\n")] = '\0';

    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Student_Data.bin", "rb");
    if (inputFile == NULL)
    {
        printf("\t\t=========> Khong the mo File <=========\n");
        return;
    }

    int studentFound = 0;

    printf("\t\t\t\t\t\t\t\t\t[---------------------Danh sach sinh vien tim thay---------------------]\n\n");
    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+------+\n");
    printf("\t|  ID  |        NAME        | AGE  | SEX  | PHONE NUM |                       EMAIL                      |                ADDRESS                 | BIRTHDAY |              MAJOR           |STATUS|\n");
    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+------+\n");

    while (fread(&searchStudentInfo, sizeof(struct Student), 1, inputFile))
    {
        if (strstr(searchStudentInfo.studentName, nameToSearch) != NULL)
        {
            studentFound = 1;
            printf("\t|%-6s|%-20s|%-6d|%-6s|%-11s|%-50s|%-40s|%-10s|%-30s|%-6s|\n",
                   searchStudentInfo.studentID,
                   searchStudentInfo.studentName,
                   searchStudentInfo.studentAge,
                   searchStudentInfo.studentSex ? "Female" : "Male",
                   searchStudentInfo.studentPhoneNumber,
                   searchStudentInfo.studentEmail,
                   searchStudentInfo.studentAddress,
                   searchStudentInfo.studentBirthDay,
                   searchStudentInfo.studentMajor,
                   searchStudentInfo.studentStatus ? "Active" : "Inactive");
        }
    }

    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+------+\n");

    if (!studentFound)
    {
        printf("\n\t\t\t\t\t\t\t\t\t\t\t=========> Khong tim thay sinh vien nao <=========\n\n");
    }

    fclose(inputFile);
    printf("\t\t\t\t\t\t\t\t\t[-------------------------------End List-------------------------------]\n");
    printf("\n");
};

// Hàm hiển thị danh sách giáo viên
void showTeacherList()
{
    struct Teacher showTeacherInfo;
    FILE *outputFile;

    outputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Teacher_Data.bin", "rb");
    if (outputFile == NULL)
    {
        printf("\t\t=========> File khong ton tai <=========\n");
        return;
    }

    // Kiểm tra kích thước file
    fseek(outputFile, 0, SEEK_END);
    long fileSize = ftell(outputFile);
    rewind(outputFile);

    if (fileSize == 0)
    {
        printf("\t=========> File khong co du lieu <=========\n\n");
        fclose(outputFile);
        return;
    }

    printf("\t\t\t\t\t\t\t\t\t[---------------------Danh sach sinh vien---------------------]\n\n");
    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+\n");
    printf("\t|  ID  |        NAME        | AGE  | SEX  | PHONE NUM |                       EMAIL                      |                ADDRESS                 | BIRTHDAY |              MAJOR           |\n");
    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+\n");

    // Đọc dữ liệu từ file Teacher_Data.bim
    while (fread(&showTeacherInfo, sizeof(struct Teacher), 1, outputFile) == 1)
    {
        // In ra bản ghi nếu dữ liệu hợp lệ
        if (strlen(showTeacherInfo.teacherID) > 0) // Kiểm tra ID hợp lệ
        {
            printf("\t|%-6s|%-20s|%-6d|%-6s|%-11s|%-50s|%-40s|%-10s|%-30s|\n",
                   showTeacherInfo.teacherID,
                   showTeacherInfo.teacherName,
                   showTeacherInfo.teacherAge,
                   showTeacherInfo.teacherSex ? "Female" : "Male",
                   showTeacherInfo.teacherPhoneNumber,
                   showTeacherInfo.teacherEmail,
                   showTeacherInfo.teacherAddress,
                   showTeacherInfo.teacherBirthDay,
                   showTeacherInfo.teacherMajor);
        }
    }

    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+\n");

    fclose(outputFile);
    printf("\t\t\t\t\t\t\t\t\t[---------------------------End List---------------------------]\n");
    printf("\n");
};

// Hàm thêm mới giáo viên
void addNewTeacher()
{
    struct Teacher newTeacherInfo;
    FILE *inputFile;

    inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Teacher_Data.bin", "ab");
    if (inputFile == NULL)
    {
        printf("\t\t=========> Khong the mo file Teacher_Data.bin <=========\n");
        return;
    }

    printf("Nhap vao ID cua giao vien: ");
    scanf("%6s", newTeacherInfo.teacherID);
    getchar(); // Xóa ký tự xuống dòng còn lại sau scanf

    do
    {
        printf("Nhap vao ten cua giao vien: ");
        fgets(newTeacherInfo.teacherName, sizeof(newTeacherInfo.teacherName), stdin);
        newTeacherInfo.teacherName[strcspn(newTeacherInfo.teacherName, "\n")] = '\0';
    } while (!isValidName(newTeacherInfo.teacherName));

    printf("Nhap vao tuoi cua giao vien: ");
    scanf("%d", &newTeacherInfo.teacherAge);

    printf("Nhap vao gioi tinh cua giao vien (0: Nam, 1: Nu): ");
    scanf("%d", &newTeacherInfo.teacherSex);
    getchar();

    do
    {
        printf("Nhap vao so dien thoai cua giao vien: ");
        scanf("%11s", newTeacherInfo.teacherPhoneNumber);
        getchar();
    } while (!isValidPhoneNumber(newTeacherInfo.teacherPhoneNumber));

    do
    {
        printf("Nhap vao email cua giao vien: ");
        scanf("%50s", newTeacherInfo.teacherEmail);
        getchar();
    } while (!isValidEmail(newTeacherInfo.teacherEmail));

    printf("Nhap vao dia chi cua giao vien: ");
    fgets(newTeacherInfo.teacherAddress, sizeof(newTeacherInfo.teacherAddress), stdin);
    newTeacherInfo.teacherAddress[strcspn(newTeacherInfo.teacherAddress, "\n")] = '\0';

    printf("Nhap vao ngay sinh cua giao vien (dd/mm/yyyy): ");
    scanf("%10s", newTeacherInfo.teacherBirthDay);
    getchar();

    printf("Nhap vao nganh day cua giao vien: ");
    fgets(newTeacherInfo.teacherMajor, sizeof(newTeacherInfo.teacherMajor), stdin);
    newTeacherInfo.teacherMajor[strcspn(newTeacherInfo.teacherMajor, "\n")] = '\0';

    if (!checkDuplicateTeacherInfo(newTeacherInfo.teacherID, newTeacherInfo.teacherEmail, newTeacherInfo.teacherPhoneNumber))
    {
        printf("\n\t=========> Them giao vien that bai do trung lap thong tin <=========\n");
    }
    else
    {
        size_t writeCount = fwrite(&newTeacherInfo, sizeof(struct Teacher), 1, inputFile);
        if (writeCount == 1)
        {
            printf("\n\t==========> Them giao vien thanh cong <==========\n");
        }
        else
        {
            printf("\n\t==========> Them giao vien that bai <==========\n");
        }
    }

    fclose(inputFile);
};

// Hàm xóa giáo viên
void deleteTeacher()
{
    struct Teacher deleteTeacherInfo;
    char IDToDelete[7];
    printf("Nhap vao ID giao vien can xoa: ");
    scanf("%6s", IDToDelete);

    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Teacher_Data.bin", "rb");
    if (inputFile == NULL)
    {
        printf("\t\t=========> Khong the mo File <=========\n");
        return;
    }

    FILE *tempFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Temp_Teacher_Data.bin", "wb");
    if (tempFile == NULL)
    {
        printf("\t\t=========> Khong the tao File xoa thong tin <=========\n");
        fclose(inputFile);
        return;
    }

    int teacherFound = 0;

    while (fread(&deleteTeacherInfo, sizeof(struct Teacher), 1, inputFile))
    {
        if (strcmp(deleteTeacherInfo.teacherID, IDToDelete) == 0)
        {
            teacherFound = 1;
            printf("Tim thay sinh vien: %s\n", deleteTeacherInfo.teacherID);
            char confirm;
            printf("Ban co chac chan muon xoa giao vien nay? (y/n): ");
            scanf(" %c", &confirm);
            if (confirm == 'y' || confirm == 'Y')
            {
                printf("\n\t=========> Xoa giao vien thanh cong <=========\n");
                continue; // Bỏ qua ghi dòng này vào file tạm
            }
            else
            {
                printf("\n\t=========> Huy lenh xoa giao vien <=========\n");
            }
        }
        // Ghi lại thông tin sinh viên không bị xóa vào file tạm
        fwrite(&deleteTeacherInfo, sizeof(struct Teacher), 1, tempFile);
    }

    fclose(inputFile);
    fclose(tempFile);

    if (!teacherFound)
    {
        printf("Khong tim thay giao vien co ID %s.\n", IDToDelete);
        remove("D:\\Code C task\\My Main Project\\Project\\data\\Temp_Teacher_Data.bin");
    }
    else
    {
        if (remove("D:\\Code C task\\My Main Project\\Project\\data\\Teacher_Data.bin") == 0 &&
            rename("D:\\Code C task\\My Main Project\\Project\\data\\Temp_Teacher_Data.bin", "D:\\Code C task\\My Main Project\\Project\\data\\Teacher_Data.bin") == 0)
        {
            printf("\n\t=========> Cap nhat file thanh cong sau khi xoa <=========\n");
        }
        else
        {
            printf("\n\t=========> Loi cap nhat file sau khi xoa <=========\n");
        }
    }
};

// Hàm chỉnh sửa thông tin giáo viên
void editTeacherInfo()
{
    struct Teacher editTeacherInfo;
    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Teacher_Data.bin", "rb+");
    if (!inputFile)
    {
        printf("\t\t=========> Khong the mo File <=========\n");
        return;
    }

    char IDToSearch[7];
    printf("Nhap vao ID giao vien can chinh sua: ");
    scanf("%6s", IDToSearch);

    int teacherFound = 0;
    long position;

    while (fread(&editTeacherInfo, sizeof(struct Teacher), 1, inputFile))
    {
        if (strcmp(editTeacherInfo.teacherID, IDToSearch) == 0)
        {
            teacherFound = 1;
            printf("Tim thay giao vien: %s\n", editTeacherInfo.teacherID);

            // Cập nhật thông tin sinh viên
            do
            {
                printf("Nhap ten moi: ");
                getchar(); // Xóa ký tự xuống dòng còn lại
                fgets(editTeacherInfo.teacherName, sizeof(editTeacherInfo.teacherName), stdin);
                editTeacherInfo.teacherName[strcspn(editTeacherInfo.teacherName, "\n")] = '\0';
            } while (!isValidName(editTeacherInfo.teacherName));

            printf("Nhap tuoi moi: ");
            scanf("%d", &editTeacherInfo.teacherAge);

            printf("Nhap gioi tinh moi (0: Nam, 1: Nu): ");
            scanf("%d", &editTeacherInfo.teacherSex);

            do
            {
                printf("Nhap so dien thoai moi: ");
                scanf("%11s", editTeacherInfo.teacherPhoneNumber);
            } while (!isValidPhoneNumber(editTeacherInfo.teacherPhoneNumber));

            do
            {
                printf("Nhap email moi: ");
                scanf("%50s", editTeacherInfo.teacherEmail);
            } while (!isValidEmail(editTeacherInfo.teacherEmail));

            printf("Nhap dia chi moi: ");
            getchar();
            fgets(editTeacherInfo.teacherAddress, sizeof(editTeacherInfo.teacherAddress), stdin);
            editTeacherInfo.teacherAddress[strcspn(editTeacherInfo.teacherAddress, "\n")] = '\0';

            printf("Nhap ngay sinh moi (dd/mm/yyyy): ");
            scanf("%10s", editTeacherInfo.teacherBirthDay);

            printf("Nhap nganh day moi: ");
            getchar();
            fgets(editTeacherInfo.teacherMajor, sizeof(editTeacherInfo.teacherMajor), stdin);
            editTeacherInfo.teacherMajor[strcspn(editTeacherInfo.teacherMajor, "\n")] = '\0';

            if (!checkDuplicateTeacherInfo(editTeacherInfo.teacherID, editTeacherInfo.teacherEmail, editTeacherInfo.teacherPhoneNumber))
            {
                printf("\n\t=========> Chinh sua thong giao vien that bai do trung lap thong tin <=========\n");
            }
            else
            {
                // Ghi đè thông tin giáo viên
                position = ftell(inputFile) - sizeof(struct Teacher);
                fseek(inputFile, position, SEEK_SET);
                if (fwrite(&editTeacherInfo, sizeof(struct Teacher), 1, inputFile) == 1)
                {
                    printf("\n\t=========> Cap nhat thong tin hoan tat <=========\n");
                }
                else
                {
                    printf("\n\t=========> Loi ghi du lieu vao File <=========\n");
                }
            }
            break;
        }
    }

    if (!teacherFound)
    {
        printf("Khong tim thay giao vien co ID %s.\n", IDToSearch);
    }

    fclose(inputFile);
};

// Hàm tìm kiếm giáo viên
void searchTeacher()
{
    struct Teacher searchTeacherInfo;
    char nameToSearch[21];
    printf("Nhap vao ten giao vien can tim: ");
    getchar(); // Xóa ký tự xuống dòng còn lại
    fgets(nameToSearch, sizeof(nameToSearch), stdin);
    nameToSearch[strcspn(nameToSearch, "\n")] = '\0';

    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Teacher_Data.bin", "rb");
    if (inputFile == NULL)
    {
        printf("\t\t=========> Khong the mo File <=========\n");
        return;
    }

    int teacherFound = 0;

    printf("\t\t\t\t\t\t\t\t\t[---------------------Danh sach giao vien tim thay---------------------]\n\n");
    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+\n");
    printf("\t|  ID  |        NAME        | AGE  | SEX  | PHONE NUM |                       EMAIL                      |                ADDRESS                 | BIRTHDAY |              MAJOR           |\n");
    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+\n");

    while (fread(&searchTeacherInfo, sizeof(struct Teacher), 1, inputFile))
    {
        if (strstr(searchTeacherInfo.teacherName, nameToSearch) != NULL)
        {
            teacherFound = 1;
            printf("\t|%-6s|%-20s|%-6d|%-6s|%-11s|%-50s|%-40s|%-10s|%-30s|\n",
                   searchTeacherInfo.teacherID,
                   searchTeacherInfo.teacherName,
                   searchTeacherInfo.teacherAge,
                   searchTeacherInfo.teacherSex ? "Female" : "Male",
                   searchTeacherInfo.teacherPhoneNumber,
                   searchTeacherInfo.teacherEmail,
                   searchTeacherInfo.teacherAddress,
                   searchTeacherInfo.teacherBirthDay,
                   searchTeacherInfo.teacherMajor);
        }
    }

    printf("\t+------+--------------------+------+------+-----------+--------------------------------------------------+----------------------------------------+----------+------------------------------+\n");

    if (!teacherFound)
    {
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t=========> Khong tim thay giao vien nao <=========\n\n");
    }

    fclose(inputFile);
    printf("\t\t\t\t\t\t\t\t\t[--------------------------------End List-------------------------------]\n");
    printf("\n");
};

// Hàm thêm sinh viên vào lớp học
void addTeacherToClass()
{
    struct Teacher addTeacherInfoToClass;
    struct Class classInfo;
    char teacherID[7], classID[7];
    printf("Nhap vao ID cua giao vien can them vao lop: ");
    scanf("%6s", teacherID);

    printf("Nhap vao ID cua lop hoc: ");
    scanf("%6s", classID);

    // Mở file dữ liệu giáo viên và lớp học
    FILE *teacherFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Teacher_Data.bin", "rb+");
    FILE *classFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Class_Data.bin", "rb+");

    if (teacherFile == NULL || classFile == NULL)
    {
        printf("\t\t=========> Khong the mo File <=========\n");
        return;
    }

    int teacherFound = 0, classFound = 0;

    // Kiểm tra xem giáo viên và lớp học có tồn tại không
    while (fread(&addTeacherInfoToClass, sizeof(struct Teacher), 1, teacherFile))
    {
        if (strcmp(addTeacherInfoToClass.teacherID, teacherID) == 0)
        {
            teacherFound = 1;
            break;
        }
    }

    if (!teacherFound)
    {
        printf("Khong tim thay giao vien co ID %s.\n", teacherID);
        fclose(teacherFile);
        fclose(classFile);
        return;
    }

    while (fread(&classInfo, sizeof(struct Class), 1, classFile))
    {
        if (strcmp(classInfo.classID, classID) == 0)
        {
            classFound = 1;
            break;
        }
    }

    if (!classFound)
    {
        printf("Khong tim thay lop hoc co ID %s.\n", classID);
        fclose(teacherFile);
        fclose(classFile);
        return;
    }

    // kiểm tra xem lớp đã có giáo viên chưa và thêm giáo viên vào lớp nếu dữ liệu phù hợp
    if (strlen(classInfo.classTeacherName) > 0)
    {
        printf("Lop hoc nay da co giao vien giang day.\n");
        fclose(teacherFile);
        fclose(classFile);
        return;
    }

    strcpy(classInfo.classTeacherName, addTeacherInfoToClass.teacherName);
    fseek(classFile, -sizeof(struct Class), SEEK_CUR);
    fwrite(&classInfo, sizeof(struct Class), 1, classFile);

    printf("\n\t=========> Them giao vien vao lop hoc thanh cong <=========\n");

    fclose(teacherFile);
    fclose(classFile);
};

// Hàm hiển thị danh sách lớp học
void showClassList()
{
    struct Class showClassInfo;
    FILE *outputFile;

    outputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Class_Data.bin", "rb");
    if (outputFile == NULL)
    {
        printf("\t\t=========> File khong ton tai <=========\n");
        return;
    }

    // Kiểm tra kích thước file
    fseek(outputFile, 0, SEEK_END);
    long fileSize = ftell(outputFile);
    rewind(outputFile);

    if (fileSize == 0)
    {
        printf("\t=========> File khong co du lieu <=========\n\n");
        fclose(outputFile);
        return;
    }

    printf("\t\t\t\t\t\t\t[-----------------------Danh sach lop hoc----------------------]\n\n");
    printf("\t\t\t\t\t+------+--------------------------------------------------+------------------------------+------+\n");
    printf("\t\t\t\t\t|  ID  |                       NAME                       |             MAJOR            |STATUS|\n");
    printf("\t\t\t\t\t+------+--------------------------------------------------+------------------------------+------+\n");

    // Đọc dữ liệu từ file Class_Data.bin
    while (fread(&showClassInfo, sizeof(struct Class), 1, outputFile) == 1)
    {
        // In ra bản ghi nếu dữ liệu hợp lệ
        if (strlen(showClassInfo.classID) > 0) // Kiểm tra ID hợp lệ
        {
            printf("\t\t\t\t\t|%-6s|%-50s|%-30s|%-6s|\n",
                   showClassInfo.classID,
                   showClassInfo.className,
                   showClassInfo.classMajor,
                   showClassInfo.classStatus ? "Active" : "Inactive");
        }
    }
    printf("\t\t\t\t\t+------+--------------------------------------------------+------------------------------+------+\n");

    fclose(outputFile);
    printf("\t\t\t\t\t\t\t[---------------------------End List---------------------------]\n");
    printf("\n");
};

// Hàm thêm mới lớp học
void addNewClass()
{
    struct Class addClassInfo;
    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Class_Data.bin", "ab");

    if (inputFile == NULL)
    {
        printf("\t\t=========> Khong the mo file Class_Data.bin <=========\n");
        return;
    }

    strcpy(addClassInfo.classTeacherName, ""); // Gán giá trị ban đầu cho classTeacherName để đảm bảo không bị chèn dữ liệu rác
    addClassInfo.classSize = 0;

    printf("Nhap vao ID cua lop hoc: ");
    scanf("%6s", addClassInfo.classID);
    getchar(); // Xóa ký tự xuống dòng còn lại sau scanf

    do
    {
        printf("Nhap vao ten cua lop hoc: ");
        fgets(addClassInfo.className, sizeof(addClassInfo.className), stdin);
        addClassInfo.className[strcspn(addClassInfo.className, "\n")] = '\0';
    } while (!isValidName(addClassInfo.className));

    printf("Nhap vao nganh hoc cua lop hoc: ");
    fgets(addClassInfo.classMajor, sizeof(addClassInfo.classMajor), stdin);
    addClassInfo.classMajor[strcspn(addClassInfo.classMajor, "\n")] = '\0';

    printf("Nhap vao trang thai cua lop hoc (0: Khong giang day, 1: Dang giang day): ");
    scanf("%d", &addClassInfo.classStatus);

    if (!checkDuplicateClassInfo(addClassInfo.classID, addClassInfo.className))
    {
        printf("\n\t=========> Them lop hoc that bai do thong tin bi trung lap thong tin<=========\n");
    }
    else
    {
        size_t writeCount = fwrite(&addClassInfo, sizeof(struct Class), 1, inputFile);
        if (writeCount == 1)
        {
            printf("\n\t=========> Them lop hoc thanh cong <=========\n");
        }
        else
        {
            printf("\n\t=========> Loi ghi du lieu <=========\n");
        }
    }
    fclose(inputFile);
};

// Hàm chỉnh sửa thông tin lớp học
void editClassInfo()
{
    struct Class classInfo;
    FILE *file = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Class_Data.bin", "rb+");
    if (!file)
    {
        printf("\t\t=========> Khong the mo File <=========\n");
        return;
    }

    char IDToSearch[7];
    printf("Nhap vao ID lop hoc can chinh sua: ");
    scanf("%6s", IDToSearch);

    int classFound = 0;

    while (fread(&classInfo, sizeof(struct Class), 1, file))
    {
        // So sánh chuỗi ID lớp học
        if (strcmp(classInfo.classID, IDToSearch) == 0)
        {
            classFound = 1;
            printf("Tim thay lop hoc: %s\n", classInfo.classID);

            // Cập nhật thông tin lớp học
            printf("Nhap ten moi cua lop: ");
            getchar(); // Xóa ký tự xuống dòng còn lại
            fgets(classInfo.className, sizeof(classInfo.className), stdin);
            classInfo.className[strcspn(classInfo.className, "\n")] = '\0';

            printf("Nhap nganh hoc moi: ");
            fgets(classInfo.classMajor, sizeof(classInfo.classMajor), stdin);
            classInfo.classMajor[strcspn(classInfo.classMajor, "\n")] = '\0';

            printf("Nhap trang thai moi (0: Khong hoat dong, 1: Hoat dong): ");
            scanf("%d", &classInfo.classStatus);

            // Đảm bảo con trỏ file quay lại đúng vị trí của bản ghi cần ghi đè
            fseek(file, -sizeof(struct Class), SEEK_CUR);

            // Ghi đè thông tin lớp học
            if (fwrite(&classInfo, sizeof(struct Class), 1, file) == 1)
            {
                printf("\n\t=========> Cap nhat thong tin hoan tat <=========\n");
            }
            else
            {
                printf("\n\t=========> Loi ghi du lieu vao file <=========\n");
                return;
            }
            break;
        }
    }

    if (!classFound)
    {
        printf("Khong tim thay lop hoc co ID %s.\n", IDToSearch);
    }

    fclose(file);
};

// Hàm xóa lớp học
void deleteClass()
{
    struct Class deleteClassInfo;
    char IDToDelete[7];
    printf("Nhap vao ID lop hoc can xoa: ");
    scanf("%6s", IDToDelete);

    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Class_Data.bin", "rb");
    if (inputFile == NULL)
    {
        printf("\t\t=========> Khong the mo File <=========\n");
        return;
    }

    FILE *tempFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Temp_Class_Data.bin", "wb");
    if (tempFile == NULL)
    {
        printf("\t\t=========> Khong the tao File xoa thong tin <=========\n");
        fclose(inputFile);
        return;
    }

    int classFound = 0;

    while (fread(&deleteClassInfo, sizeof(struct Class), 1, inputFile))
    {
        if (strcmp(deleteClassInfo.classID, IDToDelete) == 0)
        {
            classFound = 1;
            printf("Tim thay lop hoc: %s\n", deleteClassInfo.classID);
            char confirm;
            printf("Ban co chac chan muon xoa lop hoc nay? (y/n): ");
            scanf(" %c", &confirm);
            if (confirm == 'y' || confirm == 'Y')
            {
                printf("\n\t=========> Xoa lop hoc thanh cong <=========\n");
                continue; // Bỏ qua ghi dòng này vào file tạm
            }
            else
            {
                printf("\n\t=========> Huy lenh xoa lop hoc <=========\n");
            }
        }
        // Ghi lại thông tin lớp học không bị xóa vào file tạm
        fwrite(&deleteClassInfo, sizeof(struct Class), 1, tempFile);
    }

    fclose(inputFile);
    fclose(tempFile);

    if (!classFound)
    {
        printf("Khong tim thay lop hoc co ID %s.\n", IDToDelete);
        remove("D:\\Code C task\\My Main Project\\Project\\data\\Temp_Class_Data.bin");
    }
    else
    {
        if (remove("D:\\Code C task\\My Main Project\\Project\\data\\Class_Data.bin") == 0 &&
            rename("D:\\Code C task\\My Main Project\\Project\\data\\Temp_Class_Data.bin", "D:\\Code C task\\My Main Project\\Project\\data\\Class_Data.bin") == 0)
        {
            printf("\n\t=========> Cap nhat file thanh cong sau khi xoa <=========\n");
        }
        else
        {
            printf("\n\t=========> Loi cap nhat file sau khi xoa <=========\n");
        }
    }
};

// Hàm thêm sinh viên vào lớp
void addStudentToClass()
{
    struct Student addStudentInfoToClass;
    struct Class classInfo;
    char studentID[7], classID[7];
    printf("Nhap vao ID sinh vien can them vao lop: ");
    scanf("%6s", studentID);

    printf("Nhap vao ID lop hoc: ");
    scanf("%6s", classID);

    // Mở file dữ liệu sinh viên và lớp học
    FILE *studentFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Student_Data.bin", "rb+");
    FILE *classFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Class_Data.bin", "rb+");

    if (studentFile == NULL || classFile == NULL)
    {
        printf("\t=========> Khong the mo file du lieu <=========\n");
        return;
    }

    int studentFound = 0, classFound = 0;

    // Kiểm tra sinh viên có tồn tại không và có đang nằm trong lớp nào không
    while (fread(&addStudentInfoToClass, sizeof(struct Student), 1, studentFile))
    {
        if (strcmp(addStudentInfoToClass.studentID, studentID) == 0)
        {
            studentFound = 1;
            if (strlen(addStudentInfoToClass.studentClassID) > 0)
            {
                printf("\t=========> Sinh vien nay da nam trong lop khac <=========\n");
                fclose(studentFile);
                fclose(classFile);
                return;
            }
            break;
        }
    }

    if (!studentFound)
    {
        printf("\t=========> Khong tim thay sinh vien co ID %s <=========\n", studentID);
        fclose(studentFile);
        fclose(classFile);
        return;
    }

    // Kiểm tra lớp có tồn tại không và còn chỗ không
    while (fread(&classInfo, sizeof(struct Class), 1, classFile))
    {
        if (strcmp(classInfo.classID, classID) == 0)
        {
            classFound = 1;
            if (classInfo.classSize >= 40)
            {
                printf("\t=========> Lop da day khong the them sinh vien <=========\n");
                fclose(studentFile);
                fclose(classFile);
                return;
            }
            break;
        }
    }

    if (!classFound)
    {
        printf("\t=========> Khong tim thay lop hoc co ID %s <=========\n", classID);
        fclose(studentFile);
        fclose(classFile);
        return;
    }

    // Thêm sinh viên vào lớp
    strcpy(addStudentInfoToClass.studentClassID, classID);
    fseek(studentFile, -sizeof(struct Student), SEEK_CUR);
    fwrite(&addStudentInfoToClass, sizeof(struct Student), 1, studentFile);

    // Cập nhật số lượng sinh viên trong lớp
    classInfo.classSize++;
    fseek(classFile, -sizeof(struct Class), SEEK_CUR);
    fwrite(&classInfo, sizeof(struct Class), 1, classFile);

    printf("\t=========> Them sinh vien vao lop thanh cong <=========\n");

    fclose(studentFile);
    fclose(classFile);
};

// Hàm xóa sinh viên khỏi lớp
void deleteStudentFromClass()
{
    struct Student deleteStudentInfoFromClass;
    struct Class classInfo;
    char studentID[7];
    printf("Nhap vao ID sinh vien can xoa khoi lop: ");
    scanf("%6s", studentID);

    // Mở file dữ liệu sinh viên và lớp học
    FILE *studentFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Student_Data.bin", "rb+");
    FILE *classFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Class_Data.bin", "rb+");

    if (studentFile == NULL || classFile == NULL)
    {
        printf("\t=========> Khong the mo file du lieu <=========\n");
        return;
    }

    int studentFound = 0, classFound = 0;

    // Kiểm tra sinh viên có tồn tại không và đang ở lớp nào
    while (fread(&deleteStudentInfoFromClass, sizeof(struct Student), 1, studentFile))
    {
        if (strcmp(deleteStudentInfoFromClass.studentID, studentID) == 0)
        {
            studentFound = 1;
            if (strlen(deleteStudentInfoFromClass.studentClassID) == 0)
            {
                printf("\t=========> Sinh vien nay chua nam trong lop nao <=========\n");
                fclose(studentFile);
                fclose(classFile);
                return;
            }
            break;
        }
    }

    if (!studentFound)
    {
        printf("\t=========> Khong tim thay sinh vien co ID %s <=========\n", studentID);
        fclose(studentFile);
        fclose(classFile);
        return;
    }

    // Xác nhận xóa sinh viên khỏi lớp
    char confirm;
    printf("Ban co chac chan muon xoa sinh vien nay khoi lop? (y/n): ");
    scanf(" %c", &confirm);
    if (confirm != 'y' && confirm != 'Y')
    {
        printf("\t=========> Huy lenh xoa sinh vien khoi lop <=========\n");
        fclose(studentFile);
        fclose(classFile);
        return;
    }

    // Tìm lớp hiện tại của sinh viên
    while (fread(&classInfo, sizeof(struct Class), 1, classFile))
    {
        if (strcmp(classInfo.classID, deleteStudentInfoFromClass.studentClassID) == 0)
        {
            classFound = 1;
            break;
        }
    }

    // Xóa sinh viên khỏi lớp
    strcpy(deleteStudentInfoFromClass.studentClassID, ""); // Xóa ID lớp của sinh viên
    fseek(studentFile, -sizeof(struct Student), SEEK_CUR);
    fwrite(&deleteStudentInfoFromClass, sizeof(struct Student), 1, studentFile);

    // Giảm số lượng sinh viên trong lớp
    if (classFound)
    {
        classInfo.classSize--;
        fseek(classFile, -sizeof(struct Class), SEEK_CUR);
        fwrite(&classInfo, sizeof(struct Class), 1, classFile);
    }

    printf("\t=========> Xoa sinh vien khoi lop thanh cong <=========\n");

    fclose(studentFile);
    fclose(classFile);
};

// Hàm hiển thị chi tiết lớp học
void showClassDetail()
{
    struct Class showClassDetailInfo;
    struct Student studentInfo;
    char classID[7];
    FILE *classFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Class_Data.bin", "rb");
    FILE *studentFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Student_Data.bin", "rb");

    if (classFile == NULL || studentFile == NULL)
    {
        printf("\t=========> Khong the mo file du lieu <=========\n");
        return;
    }

    int classFound = 0;
    int studentCount = 0;

    // Tìm lớp học theo ID
    printf("Nhap vao ID lop hoc can xem chi tiet: ");
    scanf("%6s", classID);
    while (fread(&showClassDetailInfo, sizeof(struct Class), 1, classFile))
    {
        if (strcmp(showClassDetailInfo.classID, classID) == 0)
        {
            classFound = 1;
            printf("Da tim thay lop hoc: %s\n", showClassDetailInfo.classID);
            break;
        }
    }

    if (!classFound)
    {
        printf("\t=========> Khong tim thay lop hoc co ID %s <=========\n", classID);
        fclose(classFile);
        fclose(studentFile);
        return;
    }

    // Hiển thị thông tin lớp học
    printf("\n\t\t\t\t\t\t\t\t[---------------------Chi tiet lop hoc---------------------]\n");
    printf("\tID Lop Hoc: %s\n", showClassDetailInfo.classID);
    printf("\tTen Lop Hoc: %s\n", showClassDetailInfo.className);
    printf("\tNganh Hoc: %s\n", showClassDetailInfo.classMajor);
    printf("\tSo Luong Sinh Vien: %d\n", showClassDetailInfo.classSize);
    printf("\tGiao vien phu trach: %s\n", showClassDetailInfo.classTeacherName);
    printf("\tTrang Thai: %s\n", showClassDetailInfo.classStatus ? "Active" : "Inactive");
    printf("\t+------+--------------------+------+------+-----------+--------------------+----------------------------------------+----------+------------------------------+------+\n");
    printf("\t|  ID  |        NAME        | AGE  | SEX  | PHONE NUM |        EMAIL       |                ADDRESS                 | BIRTHDAY |              MAJOR           |STATUS|\n");
    printf("\t+------+--------------------+------+------+-----------+--------------------+----------------------------------------+----------+------------------------------+------+\n");

    // Hiển thị thông tin sinh viên vào danh sách
    while (fread(&studentInfo, sizeof(struct Student), 1, studentFile))
    {
        if (strcmp(studentInfo.studentClassID, classID) == 0)
        {
            studentCount++;
            printf("\t|%-6s|%-20s|%-6d|%-6s|%-11s|%-20s|%-40s|%-10s|%-30s|%-6s|\n",
                   studentInfo.studentID,
                   studentInfo.studentName,
                   studentInfo.studentAge,
                   studentInfo.studentSex ? "Female" : "Male",
                   studentInfo.studentPhoneNumber,
                   studentInfo.studentEmail,
                   studentInfo.studentAddress,
                   studentInfo.studentBirthDay,
                   studentInfo.studentMajor,
                   studentInfo.studentStatus ? "Active" : "Inactive");
        }
    }

    printf("\t+------+--------------------+------+------+-----------+--------------------+----------------------------------------+----------+------------------------------+------+\n");

    if (studentCount == 0)
    {
        printf("\t\t\t\t=========> Lop hoc nay chua co sinh vien nao <=========\n");
    }

    printf("\t\t\t\t\t\t\t\t[---------------------------End List---------------------------]\n\n");

    fclose(classFile);
    fclose(studentFile);
};

// Hàm xác thực tài khoản admin
int authenticateAdmin(char *inputAccountToCheck, char *inputPasswordToCheck)
{
    struct Admin authenticateAdminInfo;
    FILE *inputFile = fopen("D:\\Code C task\\My Main Project\\Project\\data\\Admin_Data.bin", "rb");
    if (inputFile == NULL)
    {
        printf("\n\t\t\t=========> Khong the mo file Admin_Data.txt <=========\n");
        return 0;
    }

    while (fread(&authenticateAdminInfo, sizeof(struct Admin), 1, inputFile))
    {
        if (strcmp(authenticateAdminInfo.adminAccount, inputAccountToCheck) == 0 && strcmp(authenticateAdminInfo.adminPassword, inputPasswordToCheck) == 0)
        {
            fclose(inputFile);
            return 1;
        }
        else
        {
            fclose(inputFile);
            return 0;
        }
    }
};