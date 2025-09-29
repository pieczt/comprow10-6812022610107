#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    float scores[n][3]; // ใช้ array 2 มิติในการเก็บคะแนน
    float sumMath = 0, sumPhy = 0, sumChem = 0;

    // Input scores
    for(i = 0; i < n; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        printf("Math: ");
        scanf("%f", &scores[i][0]);
        printf("Physics: ");
        scanf("%f", &scores[i][1]);
        printf("Chemistry: ");
        scanf("%f", &scores[i][2]);
    }

    // Print score table
    printf("\nScore Table:\n");
    printf("Student\tMath\tPhysics\tChemistry\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%.2f\t%.2f\t%.2f\n", i + 1, scores[i][0], scores[i][1], scores[i][2]);
        sumMath += scores[i][0];
        sumPhy += scores[i][1];
        sumChem += scores[i][2];
    }

    // Print average per subject
    printf("\nAverage per subject:\n");
    printf("Math: %.2f\n", sumMath / n);
    printf("Physics: %.2f\n", sumPhy / n);
    printf("Chemistry: %.2f\n", sumChem / n);

    return 0;
}