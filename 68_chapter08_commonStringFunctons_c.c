#include <stdio.h>
#include <string.h>
//strcmp() function
int main(){
    char str1[]="abcd";
    char str2[]="abCd";
    char str3[]="abcd";
    int result;

    //Comparing strings str1 and str2
    result = strcmp(str1,str2);
    printf("strcmp(str1,str2) = %d\n",result);

    //Comparing strings str1 and str3
    result = strcmp(str1,str3);
    printf("strcmp(str1,str3) = %d\n",result);

    return 0;
}