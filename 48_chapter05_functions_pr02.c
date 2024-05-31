#include <stdio.h>
//Function declaration/prototype
void namaste();
void bonjour();

int main(){
    char ch;
    printf("Enter 'n' for Nepalese and 'f' for french.\n");
    scanf("%c",&ch);
    if(ch == 'n'){
        namaste(); //function call
    } else {
        bonjour(); //function call
    }

    return 0;
}

//Function definition
void namaste(){
    printf("Namaste\n");
}

void bonjour(){
    printf("Bonjour\n");
}
