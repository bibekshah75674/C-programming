#include <stdio.h>

int main() {
    int num;
    printf("Enter a number(1-100):\n");
    scanf("%d",&num);

    if(num >30 && num <= 100){
        printf("Passed!\n");
    } else if(num >= 0 && num <= 30){
        printf("Failed!\n");
    } else{
        printf("Not a valid number!\n");
    }
    return 0;
}





