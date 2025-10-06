#include <stdio.h>

// ประกาศฟังก์ชัน
void inputAndShow();  // ไม่มี parameter และไม่ return ค่า

int main() {
    inputAndShow();  // เรียกใช้ฟังก์ชัน
    return 0;
}

void inputAndShow() {
    int math, physics, chemistry;

    printf("Enter Math: ");
    scanf("%d", &math);

    printf("Enter Physics: ");
    scanf("%d", &physics);

    printf("Enter Chemistry: ");
    scanf("%d", &chemistry);

    printf("Scores: Math = %d, Physics = %d, Chemistry = %d\n", math, physics, chemistry);
}