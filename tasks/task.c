#include <stdio.h>
#include <string.h>

int main(void){
    int choice,total=0,quantity=0,exp;
    char yn,item[100];


    printf("============Welcome To TOPS Restaurent==============\n");
    printf("\tSr.No\tItem\t\tPrice\n");
    printf("\t1\tPizza\t\t90/-\n");
    printf("\t2\tBurgur\t\t89/-\n");
    printf("\t3\tPani-Puri\t100/-\n");
    printf("\t4\tDosha\t\t80/-\n");

    while(yn!='n'){
        printf("Your Item: ");
        scanf("%s",item);
        
        printf("Quantity: ");
        scanf("%d",&quantity);

        if(strcmp("Pizza",item) == 0){
            exp = quantity*90;
            total+=exp;
            printf("Total Price: %d\n",quantity * 90);

        }

        else if(strcmp("Burgur",item) ==0){
            exp = quantity * 89;
            total+=exp;
            printf("Total Price: %d\n",quantity * 89);


        }
        else if(strcmp("Pani-Puri",item) == 0){
            exp = quantity * 100;
            total +=exp;
            printf("Total Price: %d\n",quantity * 100);

        }
        else{
            exp = quantity * 80;
            total +=exp;
            printf("Total Price: %d\n",quantity * 80);

        }
        while(getchar()!='\n');


        printf("Do you want anything else ? [y/n]: ");
        scanf("%c",&yn);


        
    }

    printf("\n--------------------------------\n");
    printf("Thank you\n");
    printf("Your total is : %d\n",total);
    printf("\n--------------------------------\n");

    
    return 0;
}