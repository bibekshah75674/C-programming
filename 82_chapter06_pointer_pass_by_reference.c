#include <stdio.h>

void _square(int *n);

int main(){
    int number = 4;
    _square(&number);
    printf("The number is %d\n",number);
    return 0;
}

void _square(int *n){
    *n = (*n) * (*n);
    printf("The square is %d\n",*n);
}
