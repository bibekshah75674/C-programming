#include <stdio.h>

void square(int n);

int main(){
    int number = 4;
    square(number);
    printf("The number is %d\n",number);
    return 0;
}
//call by value
void square(int n){
    n = n * n;
    printf("Square is %d\n",n);
}