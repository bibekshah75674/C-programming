//write a program to check if given character is digit or not
#include <stdio.h>
#include <ctype.h>

int main(){
    char character;
    printf("Enter a character:\n");
    scanf("%c",&character);
    //printf("%d",isdigit(character));
    if(isdigit(character)){
        printf("The given character is a digit.\n");
    } else{
        printf("The given character is not a digit.\n");
    }
    return 0;
}



