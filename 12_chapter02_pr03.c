//C program to print the average of three numbers
#include <stdio.h>

int main(){
    int x,y,z;
    printf("Enter first number:\n");
    scanf("%d",&x);

    printf("Enter second number:\n");
    scanf("%d",&y);

    printf("Enter third number:\n");
    scanf("%d",&z);

    int average;
    average = (x + y + z)/3;
    printf("The average of three numbers is %d",average);
    return 0;
}

