#include <stdio.h>

int main(){
    int age;
    printf("Enter age:\n");
    scanf("%d",&age);

    if(age >= 18){
        printf("ADULT!\n");
    } else if(age >= 13 && age < 18){
        printf("Teenager\n");
    } else{
        printf("Child\n");
    }
    printf("Thank you!");
    return 0;
}



