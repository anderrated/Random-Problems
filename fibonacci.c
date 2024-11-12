// 1. **Fibonacci Sequence**: Write a function that generates the first
// \( n \) numbers in the Fibonacci sequence. Use both recursive and
// iterative methods.

#include <stdio.h>

int main() {

    int n;
    int value;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("0\n");
    }
    else {
        int previous1 = 1;
        int previous2 = 0;
        for (int i = 2; i <= n; i++) {
            value = previous1 + previous2;
            previous2 = previous1;
            previous1 = value;     
        }
        printf("%d\n", value);
    }
}

