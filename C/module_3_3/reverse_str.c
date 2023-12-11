#include <stdio.h>

void reverse(char abc[], int length) {
    // Setting the base case if the length is always greater than or eq to 0
    if (length >= 0) {
        // print from the last element
        printf("%c", abc[length]);
        // Decrement the length by everytime
        reverse(abc, length - 1);
    }
}

int main(void) {
    // Passing the array and length
    char abc[] = "test";
    reverse(abc, 4);
    printf("\n");
    return 0;
}
