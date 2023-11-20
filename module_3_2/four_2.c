#include <stdio.h>


int main(void){
    char a;
    // Take a character input from the user
    printf("Enter char: ");
    scanf("%c",&a);
    // if the character is a capital letter then convert it to lowercase by adding 32 to it's ascii value
    if (a < 90){
        a = a+ 32;
    }

    // Compare a
    switch(a){
        // If case is a then it's vowel
        case 'a':
            printf("Vowel\n");
            break;
        // If case is b then it's vowel
        case 'e':
            printf("Vowel\n");
            break;
        // So on....
        case 'i':
            printf("Vowel\n");
            break;

        case 'o':
            printf("Vowel\n");
            break;

        case 'u':
            printf("Vowel\n");
            break;

        // otherwise it's a consonant

        default:
            printf("Consonant\n");
            break;
    }

    return 0;
}