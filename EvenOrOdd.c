#include <stdio.h>

int main() {
    int number ;
    int answer;

    printf("Enter number: ");
    scanf("%d", &number);

    answer = number % 2;

    if (answer == 0)
    {
        printf("Number is even\n");
    }else 
    {
        printf("Number is odd\n");
    }

return 0 ;

}