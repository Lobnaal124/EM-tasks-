#include<stdio.h>

int main(){
	int num;
     //get number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        // Even number
        printf("The number is even");
    } else {
        // Odd number
        printf("The number is odd");
    }
}