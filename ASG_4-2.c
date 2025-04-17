#include<stdio.h>
#include<string.h>
void reverse(char* begin, char* end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

// Function to reverse words in a string
char* reverseWords(char* str) {
  
    // reverse the whole string
    reverse(str, (str + strlen(str)) - 1);

    int n = strlen(str);
    int i = 0;
    for (int l = 0; l < n; ++l) {
        if (str[l] != '.') {
          
            // go to the beginning of the word
            if (i != 0) str[i++] = '.';

            // go to the end of the word
            int r = l;
            while (r < n && str[r] != '.') str[i++] = str[r++];

            // reverse the word
            reverse(str + i - (r - l), str + i - 1);

            // move to the next word
            l = r;
        }
    }
    str[i] = '\0';
    return str;
}

int main() {
    char str[] = "..I.Like.This.Program.Very.Much.";
    printf("%s\n", reverseWords(str));
}