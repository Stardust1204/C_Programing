#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers from the user
    printf("Enter first number:\n");
    scanf("%d", &num1);

    printf("Enter second number:\n");
    scanf("%d", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Display result
    printf("Sum = %d\n", sum);

    return 0;
}
