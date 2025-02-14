// Khai báo hàm

// Hàm hiển thị menu chính
void mainMenu();
// Hàm hiển thị menu quản lý sinh viên
void studentManagementMenu();
// Hàm hiển thị menu quản lý giáo viên
void teacherManagementMenu();
// Hàm hiển thị menu quản lý lớp học
void classManagementMenu();
// Hàm menu nhỏ của chức năng quản lý chi tiết lớp học
void classDetailMenu();
// Hàm menu lựa chọn thứ tự sắp xếp danh sách sinh viên
void sortStudentListMenu();
// Hàm sắp xếp danh sách sinh viên theo thứ tự A-Z
void sortStudentListAZ();
// Hàm sắp xếp danh sách sinh viên theo thứ tự Z-A
void sortStudentListZA();
// Hàm menu lựa chọn thứ tự sắp xếp danh sách lớp học
void sortClassListMenu();
// Hàm sắp xếp danh sách lớp học theo thứ tự A-Z
void sortClassListAZ();
// Hàm sắp xếp danh sách lớp học theo thứ tự Z-A
void sortClassListZA();
// Kiểm tra cú pháp email hợp lệ
bool isValidEmail(char email[]);
// Kiểm tra cú pháp số điện thoại (chỉ cho phép 10 số)
bool isValidPhoneNumber(char phoneNumber[]);
// Kiểm tra tên (không chứa số hoặc ký tự đặc biệt)
bool isValidName(char name[]);
// Hàm kiểm tra trùng lặp dữ liệu sinh viên
int checkDuplicateInfo(char *emailToCheck, char *phoneNumberToCheck);
// Hàm kiểm tra trùng lặp dữ liệu giáo viên
int checkDuplicateTeacherInfo(char *IDToCheck, char *emailToCheck, char *phoneNumberToCheck);
// Hàm kiểm tra dữ liệu trùng lặp dữ liệu lớp học
int checkDuplicateClassInfo(char *IDToCheck, char *nameToCheck);
// Hàm thêm mới sinh viên
void addNewStudent();
// Hàm hiển thị danh sách sinh viên
void showStudentList();
// Hàm chỉnh sửa thông tin sinh viên giữ nguyên ID
void editStudentInfo();
// Hàm xóa sinh viên
void deleteStudent();
// Hàm tìm kiếm sinh viên
void searchStudent();
// Hàm hiển thị danh sách giáo viên
void showTeacherList();
// Hàm thêm mới giáo viên
void addNewTeacher();
// Hàm xóa giáo viên
void deleteTeacher();
// Hàm chỉnh sửa thông tin giáo viên
void editTeacherInfo();
// Hàm tìm kiếm giáo viên
void searchTeacher();
// Hàm thêm sinh viên vào lớp học
void addTeacherToClass();
// Hàm hiển thị danh sách lớp học
void showClassList();
// Hàm thêm mới lớp học
void addNewClass();
// Hàm xóa lớp học
void deleteClass();
// Hàm chỉnh sửa thông tin lớp học
void editClassInfo();
// Hàm hiển thị thông tin chi tiết lớp học
void showClassDetail();
// Hàm sắp xếp danh sách lớp học
void sortClassListMenu();
// Hàm thêm sinh viên vào lớp học
void addStudentToClass();
// Hàm xóa sinh viên khỏi lớp
void deleteStudentFromClass();
// Hàm xác thực tài khoản admin
int authenticateAdmin();