#include<stdio.h>

int main(){
   int num, n;

    // Input number and bit position
    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter toggle bit: ");
    scanf("%u", &n);
	int mask = 1 << n; //git a mask 
    num ^= mask; //do xor with a mask to git a toggle 
    printf("result: %u\n", num);
}