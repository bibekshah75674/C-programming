#include <stdio.h>

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if(n!=1 || n==2 && n/3 != 0 && n/4 != 0 && n/5 != 0 && n/6 != 0 && n/7 != 0 && n/8 != 0 && n/9 != 0){
        printf("The given number is a prime number.");
    } else{
        printf("The given number is not a prime number.");
    }
    return 0;
}
//CODE INCOMPLETE
//TO BE CONTINUED
