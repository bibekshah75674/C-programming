//write a program to check if the given number is a natural number
#include <stdio.h>

int main(){
    int number;
    printf("Enter a number:\n");
    scanf("%d",&number);

    if(number > 0){
        printf("The given number is a natural number.\n");
    } else {
        printf("Not a natural number.\n");
    }
    return 0;
}



