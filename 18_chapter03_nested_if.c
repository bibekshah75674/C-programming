#include <stdio.h>

int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);

    if(num >= 0){
        printf("Positive number\n");
        if (num % 2 == 0){
            printf("Even number\n");
        } else{
            printf("Odd number\n");
        }
    } else{
        printf("Negative number\n");
    }

    return 0;
}
