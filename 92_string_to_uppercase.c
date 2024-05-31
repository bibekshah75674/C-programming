/*Program to convert string to uppercase without using strupr()*/
#include <stdio.h>

int main(){
    char str1[100];

    printf("Enter the string you want to convert to uppercase:");
    fgets(str1,100,stdin);

    for(int i=0;str1[i] != '\0';i++){
        if(str1[i] >= 'a' && str1[i] <= 'z'){
            str1[i] = str1[i] - 32;
        }
    }
    printf("The given string in uppercase = %s",str1);
}
