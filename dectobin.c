#include <stdio.h>

int main() {
    int decimal, remainder;
    int binary[32];  
    int i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        remainder = decimal % 2;      
        binary[i] = remainder;       
        decimal /= 2;                 
        i++;}

    printf("The binary equivalent is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]); 
    }
    printf("\n");

    return 0;
}
