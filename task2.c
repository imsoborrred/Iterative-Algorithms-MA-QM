#include <stdio.h>

int main() {
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("Number is not prime\n");
            return 0;
        }
    }

    printf("Number is prime\n");
    return 0;
}
