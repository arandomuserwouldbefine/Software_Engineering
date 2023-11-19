#include <stdio.h>

int main(void){
    // Asking for the principal amount, rate of interest and term from the user 
    int principal;
    float rate,term,result;

    printf("Enter principal, rate of interest, term in year: ");
    scanf("%d %f %f",&principal,&rate,&term);

    // Formula = PRN / 100
    result = (principal * rate * term) / 100;
    // print the interest
    printf("Your Total interest is %.2f\n",result);
    // print the interest + principal
    printf("Your endbalance is %.2f\n",result+principal);



    return 0;
}