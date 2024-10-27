#include <stdio.h>

int main() {
    float num, increment;
    printf("Please enter a number: ");
    scanf("%f", &num);
    printf("Enter the increment: ");
    scanf("%f", &increment);

    for (int i = 0; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = num; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    if (increment <= 1) {
        for (float i = 0; i <= num; i = i + increment) {
            printf("%.2f ", i);
        }
        printf("\n");
    } else {
        printf("wrong number");
    }

    return 0;
}
