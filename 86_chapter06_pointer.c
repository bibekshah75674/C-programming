#include <stdio.h>

void _printAddress(int *n);

int main(){
    int number = 4;
    _printAddress(&number);
    printf("%u\n",&number);

    return 0;
}
//call by reference 
void _printAddress(int *n){
    printf("%u\n",n);
}