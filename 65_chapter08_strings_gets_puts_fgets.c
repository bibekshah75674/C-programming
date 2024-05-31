#include <stdio.h>

int main(){
    char name[50];
    // gets(name);
    fgets(name,50,stdin);
    puts(name);
    return 0;    
}