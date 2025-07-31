#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for numbers less than or equal to 1
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check from 2 to num/2
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Display result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
