#include <stdio.h>

//function declaration/prototype
void printHello();
void printGoodbye();

int main(){
    printHello(); //function call
    printGoodbye(); //function call
    return 0;
}

//function definition
void printHello(){
    printf("Hello world\n");
}

void printGoodbye(){
    printf("Goodbye!");
}