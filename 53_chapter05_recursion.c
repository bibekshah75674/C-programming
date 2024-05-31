#include <stdio.h>

void printHello(int n);

int main(){
    printHello(15);
    return 0;
}

//recursive function
void printHello(int n){
    if(n == 0){
        return;
    }
    printf("Hello world\n");
    printHello(n - 1);
}
