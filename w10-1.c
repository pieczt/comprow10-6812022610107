#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int scores[n]; // ใช้ array ในการเก็บคะแนน

    printf("Enter %d student scores (one per line):\n", n);
    for(i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    average = (float)sum / n;

    printf("\nNumber of students = %d\n", n);
    printf("Average score = %.2f\n", average);

    return 0;
}