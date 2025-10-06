#include <stdio.h>

// ประกาศฟังก์ชัน
void inputScores(float arr[3][3]);
void printTable(float arr[3][3]);
void printAverage(float arr[3][3]);

int main() {
    float scores[3][3]; // 3 นักเรียน × 3 วิชา

    inputScores(scores);
    printTable(scores);
    printAverage(scores);

    return 0;
}

// ฟังก์ชันรับคะแนนนักเรียน
void inputScores(float arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        printf("Math: ");
        scanf("%f", &arr[i][0]);
        printf("Physics: ");
        scanf("%f", &arr[i][1]);
        printf("Chemistry: ");
        scanf("%f", &arr[i][2]);
        printf("\n");
    }
}

// ฟังก์ชันแสดงตารางคะแนน
void printTable(float arr[3][3]) {
    printf("Score Table:\n");
    printf("Student\tMath\tPhysics\tChemistry\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t%.2f\t%.2f\t%.2f\n", i + 1, arr[i][0], arr[i][1], arr[i][2]);
    }
    printf("\n");
}

// ฟังก์ชันแสดงค่าเฉลี่ยของแต่ละวิชา
void printAverage(float arr[3][3]) {
    float avgMath = 0, avgPhysics = 0, avgChemistry = 0;

    for (int i = 0; i < 3; i++) {
        avgMath += arr[i][0];
        avgPhysics += arr[i][1];
        avgChemistry += arr[i][2];
    }

    avgMath /= 3.0;
    avgPhysics /= 3.0;
    avgChemistry /= 3.0;

    printf("Average per subject:\n");
    printf("Math = %.2f\n", avgMath);
    printf("Physics = %.2f\n", avgPhysics);
    printf("Chemistry = %.2f\n", avgChemistry);
}