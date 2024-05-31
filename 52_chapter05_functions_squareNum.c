#include <stdio.h>
#include <math.h>

//function declaration/prototype
int square_num(int n);

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int result;
    result = square_num(n);
    printf("The square of the number you entered is %d",result);
    return 0;
}

//function definition
int square_num(int n){
    return pow(n,2);
}



