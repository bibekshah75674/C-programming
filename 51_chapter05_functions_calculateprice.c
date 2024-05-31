#include <stdio.h>

//function declaration/prototype
void calculatePrice(float price);

int main(){
    float price;
    printf("Enter the total price:\n");
    scanf("%f",&price);
    calculatePrice(price);
    printf("The value of price is %f",price);
    return 0;
}

//function definition
void calculatePrice(float price){
    price = price + (0.18*price);
    printf("%f\n",price);
}




