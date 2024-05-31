#include <stdio.h>

int main(){
    char day;
    printf("Enter day(a-g):\n");
    scanf("%ch",&day);

    switch(day){
        case 'a':printf("Sunday\n");
               break;
        case 'b':printf("Monday\n");
               break;
        case 'c':printf("Tuesday\n");
               break;
        case 'd':printf("Wednesday\n");
               break;
        case 'e':printf("Thursday\n");
               break;
        case 'f':printf("Friday\n");
               break;
        case 'g':printf("Saturday\n");
               break;
        default:printf("Not a valid day!\n");
    }
    return 0;
}

