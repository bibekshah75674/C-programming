#include <stdio.h>

int main(){
    // float price = 100.0;
    // float *ptr = &price;
    // float **pptr = &ptr;
    
    // printf("price = %f\n",price);
    // printf("*ptr = %f\n",*ptr);
    // printf("**pptr = %f\n",**pptr);
    
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("The value of **pptr = %d\n",**pptr);
    return 0;
}