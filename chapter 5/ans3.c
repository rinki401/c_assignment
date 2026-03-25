#include <stdio.h>

int main() {
    int num, digit, temp, count = 0;

    // Input number and digit
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter a digit (0-9): ");
    scanf("%d", &digit);

    temp = num;  // original number ko save karne ke liye

    // Loop through each digit of the number
    while(temp != 0) {
        if(temp % 10 == digit) {
            count++;
        }
        temp = temp / 10;
    }

    if(count > 0) {
        printf("Digit %d is present %d times in %d\n", digit, count, num);
    } else {
        printf("Digit %d is not present in %d\n", digit, num);
    }

    return 0;
}
