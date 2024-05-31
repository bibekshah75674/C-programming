//Take a number(n) from user and output its cube(n*n*n)
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number:\n");
    scanf("%d",&number);

    int cube;
    cube = number * number * number;

    printf("The cube of the number you entered is %d",cube);

    return 0;
}




