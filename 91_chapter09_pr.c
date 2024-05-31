#include <stdio.h>

struct address{
    int houseno;
    int blockno;
    char city[100];
    char state[100];
};

void printAddress(struct address adds);

int main(){
    struct address adds[5];
    printf("Enter address for person 1:\n");
    scanf("%d\n",&adds[0].houseno);
    scanf("%d\n",&adds[0].blockno);
    scanf("%s\n",adds[0].city);
    scanf("%s\n",adds[0].state);

    printf("Enter address for person 2:\n");
    scanf("%d\n",&adds[1].houseno);
    scanf("%d\n",&adds[1].blockno);
    scanf("%s\n",adds[1].city);
    scanf("%s\n",adds[1].state);

    printf("Enter address for person 3:\n");
    scanf("%d\n",&adds[2].houseno);
    scanf("%d\n",&adds[2].blockno);
    scanf("%s\n",adds[2].city);
    scanf("%s\n",adds[2].state);

    printf("Enter address for person 4:\n");
    scanf("%d\n",&adds[3].houseno);
    scanf("%d\n",&adds[3].blockno);
    scanf("%s\n",adds[3].city);
    scanf("%s\n",adds[3].state);

    printf("Enter address for person 5:\n");
    scanf("%d\n",&adds[4].houseno);
    scanf("%d\n",&adds[4].blockno);
    scanf("%s\n",adds[4].city);
    scanf("%s\n",adds[4].state);

    printAddress(adds[0]);
    printAddress(adds[1]);
    printAddress(adds[2]);
    printAddress(adds[3]);
    printAddress(adds[4]);

   return 0;
}

void printAddress(struct address add){
    printf("Address of person 2 is %d,%d,%s,%s\n",add.houseno,add.blockno,add.city,add.state);
    printf("Address of person 3 is %d,%d,%s,%s\n",add.houseno,add.blockno,add.city,add.state);
    printf("Address of person 4 is %d,%d,%s,%s\n",add.houseno,add.blockno,add.city,add.state);
    printf("Address of person 1 is %d,%d,%s,%s\n",add.houseno,add.blockno,add.city,add.state);
    printf("Address of person 5 is %d,%d,%s,%s\n",add.houseno,add.blockno,add.city,add.state);
}