#include <stdio.h>

// Void function to swap and print values
void swap(int x, int y) {
    // Print before swapping
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Swap logic
     x= x^y; //make xor to swap
     y= x^y; //store the result of x in y
     x= x^y; //store the result of y in x

    // Print after swapping
    printf("After swapping:  x = %d, y = %d\n", x, y);
}

int main() {
    int a, b;
    // Input from user
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    // Call swap function
    swap(a, b);

    return 0;
}
