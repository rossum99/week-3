#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
