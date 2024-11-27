#include <stdio.h>

int main() {
    int n;
    int factorial = 1; 

    printf("Enter an integer: ");
    scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        printf("The factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}
