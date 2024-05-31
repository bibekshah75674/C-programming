#include <stdio.h>
#include <string.h>
//strlen() function
int main(){
    char a[20] = {'P','R','O','G','R','A','M','\0'};
    char b[20] = "Program";
    printf("The length of string a:%d\n",strlen(a));
    printf("The length of string b:%d\n",strlen(b));
    return 0;
}