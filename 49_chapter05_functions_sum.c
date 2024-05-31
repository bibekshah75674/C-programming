#include <stdio.h>

//function declaration/prototype
int sum(int a,int b);

int main(){
    int a, b;
    printf("Enter first number:\n");
    scanf("%d",&a);

    printf("Enter second number:\n");
    scanf("%d",&b);

    int s = sum(a,b);
    printf("Sum is %d",s);

    return 0;
}

//function definition
int sum(int a,int b){
    return a + b;
}
