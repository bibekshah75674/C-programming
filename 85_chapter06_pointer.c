#include <stdio.h>

void printAddress(int n);

int main(){
    int number = 4;
    printf("%p\n",&number);
    printAddress(number);
    return 0;
}
//call by value 
void printAddress(int n){
    printf("%p\n",&n);
}