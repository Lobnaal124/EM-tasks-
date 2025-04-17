#include<stdio.h>


void edit(int* ptr) {
    (*ptr)++;
}

int main() {
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);
	
    printf("Before edit, x = %d\n", x);
    edit(&x);
    printf("After edit, x = %d\n", x);

    int extraValues[] = {5, 20, 80};
    int i;
    printf("Now storing and printing extra values:\n");
    for (i = 0; i < 3; i++) {
        x = extraValues[i];
        printf("x = %d\n", x);
    }
}