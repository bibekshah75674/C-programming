#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int roll;
    char address[100];
    char email[100];
    int phone;
};

int main(){
    struct student s1;
    strcpy(s1.name,"Bibek shah");
    s1.roll = 03;
    strcpy(s1.address,"Dharan");
    strcpy(s1.email,"bibekshah78272@gmail.com");
    s1.phone = 9819110432;
    printf("Name is %s\n",s1.name);
    printf("roll no is %d\n",s1.roll);
    printf("address is %s\n",s1.address);
    printf("Email is %s\n",s1.email);
    printf("phone number is %d\n",s1.phone);
    return 0;
}