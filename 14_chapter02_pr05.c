//Program to print the smallest number
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter first number:\n");
    scanf("%d",&a);

    printf("Enter second number:\n");
    scanf("%d",&b);

    printf("Enter third number:\n");
    scanf("%d",&c);

    if(a < b && a < c){
        printf("%d is the smallest",a);
    } else if (b < a && b < c) {
        printf("%d is the smallest",b);
    } else{
        printf("%d is the smallest",c);
    }


    return 0;
}




