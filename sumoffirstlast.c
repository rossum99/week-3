#include <stdio.h>

int main() {
    int n, firstDigit, lastDigit, sum;
    printf("Enter a number: ");
    scanf("%d", &n);

    lastDigit = n % 10;
    firstDigit = n;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    sum = firstDigit + lastDigit;

    printf("The sum of the first and last digit is: %d\n", sum);

    return 0;
}
