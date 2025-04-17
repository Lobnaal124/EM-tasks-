#include <stdio.h>

// Recursive Fibonacci function
int fibonacciRecursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Iterative Fibonacci function
void fibonacciIterative(int terms) {
    int a = 0, b = 1, next;

    printf("Fibonacci Sequence (Iterative): ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Using iterative method
    fibonacciIterative(n);

    // Using recursive method
    printf("Fibonacci Sequence (Recursive): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacciRecursive(i));
    }
    printf("\n");

 
}
