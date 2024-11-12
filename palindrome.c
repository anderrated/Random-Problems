// 2. **Palindrome Checker**: Create a function that takes a
// string and returns `True` if it’s a palindrome, and
// `False` otherwise. Ignore spaces, punctuation, and capitalization.

#include <stdio.h>
#include <string.h>

void reverseString(char str[]);
char temp[10] = "";

void reverseString(char str[]) {
    for(int i = 0; i < strlen(str); i++) {
        temp[i] = str[strlen(str) - 1 - i];
    }
}

int main() {
    char str[10] = "";
    printf("Enter a string: ");
    scanf("%9s", str);

    // Reversing String
    reverseString(str);

    // Checking if palindrome
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == temp[i]) {
            printf("String is a palindrome.\n");
            return 0;
        }
        else {
            printf("String is not a palindrome.\n");
            return 0;
        }
    }
    
}
