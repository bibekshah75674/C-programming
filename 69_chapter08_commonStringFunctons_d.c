#include <stdio.h>
#include <string.h>
//strcat() function
int main(){
    char str1[] = "This is ";
    char str2[] = "Year 2024";

    //concatenates str1 and str2 and the result is stored in str1
    strcat(str1,str2);
    puts(str1);
    puts(str2);
    return 0;
}