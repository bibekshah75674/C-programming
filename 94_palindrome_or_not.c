#include <stdio.h>

int main(){
    int n,c,s,r;
    printf("Enter a number:\n");
    scanf("%d",&n);
    c = n;
    s = 0;
    while(n>0){
        r = n%10;
        s = r+(s*10);
        n = n/10;
    }
    if(c == s){
        printf("Palindrome\n");
    } else{
        printf("Not a palindrome\n");
    }
    return 0;

}