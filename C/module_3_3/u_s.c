#include <stdio.h>

// The size of the structure is the size of all data in it
struct ExampleStruct {
    int x;
    char y;
    float z;
};

// The size of the union is the size of the largest data type in it.
union ExampleUnion {
    int x;
    char y;
    float z;
};

int main() {
    // Creating a variable to create union and struct
    struct ExampleStruct myStruct;
    union ExampleUnion myUnion;
    // Printing the size of structure and union
    printf("Size of Structure: %lu\n", sizeof(myStruct));
    printf("Size of Union: %lu\n", sizeof(myUnion));

    return 0;
}
