#include <stdio.h>

//function declaration/prototype
void printTable(int n);

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    printTable(n); //argument/actual parameter
    return 0;
}

//function definition
void printTable(int n){ //parameter/formal parameter
    for(int i=1;i<=10;i++){
        printf("%d \n",n*i);
    }
}


