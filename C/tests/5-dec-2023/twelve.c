// WAP to make an addition of two number using pointer


#include <stdio.h>


int main(void){
    int n,m,*l,*r,res;
    printf("Enter two number: ");
    scanf("%d %d",&n,&m);
    l = &n;
    r = &m;

    res = *(l) + *(r) ;
    printf("Addition: %d",res);


    return 0;
}