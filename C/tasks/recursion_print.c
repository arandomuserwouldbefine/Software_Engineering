// 	TASK : 2: print 10 to 1 using recursion

#include <stdio.h>

// Define prototype of the function
int printNum(int n){
    // IF n == 0 then return 0
    if(n==0){
        return 0;
    }
    else{
    // Otherwise just print the n
        printf("%d\n",n);
        // return n-1
        return printNum(n-1);
    }
}

int main(void){
    printNum(10);
}
