// WAP to show
// 1. Monday to Sunday using switch case
// 2. Vowel or Consonant using switch case

#include <stdio.h>


int main(void){
    int day;

    printf("Enter week day: ");
    scanf("%d",&day);

    switch(day){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}