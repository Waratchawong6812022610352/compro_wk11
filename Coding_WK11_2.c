#include <stdio.h>

// ประกาศฟังก์ชัน average ที่มีพารามิเตอร์ 3 ตัวและส่งค่ากลับเป็น float
float average(int a, int b, int c);

int main() {
    int math, physics, chemistry;
    float avg;

    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    // เรียกฟังก์ชัน average() เพื่อคำนวณค่าเฉลี่ย
    avg = average(math, physics, chemistry);

    // แสดงผลลัพธ์
    printf("\nMath = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);
    printf("Average = %.2f\n", avg);

    return 0;
}

// ฟังก์ชันคำนวณค่าเฉลี่ย
float average(int a, int b, int c) {
    float result;
    result = (a + b + c) / 3.0; // ใช้ 3.0 เพื่อให้ผลลัพธ์เป็นทศนิยม
    return result;
}