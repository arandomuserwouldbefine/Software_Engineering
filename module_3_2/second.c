#include <stdio.h>


int main(void){
    int a,b;
    a = 20;
    b = 40;
    printf("Before: A=%d, B=%d\n",a,b);

    // First all a + b is stored in a
    a = a+b;
    // a is subtracted by b so b gets the value of a
    b = a-b;
    // b is subtracted by the value of a;
    a = a-b;
    printf("After: A=%d, B=%d\n",a,b);

    return 0;
}