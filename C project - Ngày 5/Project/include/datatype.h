#include <stdbool.h>
// Structs

// datatype cho sinh viên (Student)
struct Student
{
    char studentID[7];
    char studentName[21];
    char studentMajor[31];
    int studentAge;
    bool studentSex;
    char studentPhoneNumber[12];
    char studentEmail[51];
    char studentBirthDay[11];
    char studentAddress[41];
    int studentStatus;
    char studentClassID[7];
};

// datatype cho giáo viên (Teacher)
struct Teacher
{
    char teacherID[7];
    char teacherName[21];
    char teacherMajor[31];
    int teacherAge;
    bool teacherSex;
    char teacherPhoneNumber[12];
    char teacherEmail[21];
    char teacherBirthDay[11];
    char teacherAddress[41];
    int teacherStatus;
    char teacherClassID[7];
};

// datatype cho lớp học (Class)
struct Class
{
    char classID[7];
    char className[51];
    char classTeacherName[21];
    char classMajor[31];
    int classStatus;
    int classSize;
};

// datatype cho Admin's Account
struct Admin
{
    char adminAccount[51];
    char adminPassword[21];
};