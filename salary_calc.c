#include <stdio.h>

int main() {
    int basic, hra, da, allow, pf, totalSalary;
    char grade;

    printf("Enter basic salary: ");
    scanf("%d", &basic);

    printf("Enter grade (A, B, C): ");
    scanf(" %c", &grade);

    hra = basic * 20 / 100;
    da = basic * 50 / 100;
    if (grade == 'A') {
        allow = 1700;
    } else if (grade == 'B') {
        allow = 1500;
    } else {
        allow = 1300;
    }
    pf = basic * 11 / 100;

    totalSalary = basic + hra + da + allow - pf;

    printf("Total salary: %d\n", totalSalary);

    return 0;
}