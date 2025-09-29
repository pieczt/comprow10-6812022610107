#include <stdio.h>
#include <string.h>

int main() {
    char names[2][50]; // array สำหรับเก็บชื่อของลูกค้า 2 คน
    int len[2];

    for(int i = 0; i < 2; i++) {
        printf("Enter name of customer %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        // ลบ '\n' ที่ fgets รับมา
        names[i][strcspn(names[i], "\n")] = 0;
        len[i] = strlen(names[i]);
    }

    if(strcmp(names[0], names[1]) == 0) {
        printf("Both of your names are the same, which is %s.\n", names[0]);
        printf("The length of the name is %d characters.\n", len[0]);
    } else {
        printf("Customer 1: %s (%d characters)\n", names[0], len[0]);
        printf("Customer 2: %s (%d characters)\n", names[1], len[1]);
    }

    return 0;
}