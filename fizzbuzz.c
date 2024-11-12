// 3. **FizzBuzz**: Write a function that prints numbers from 1 to 100.
// For multiples of 3, print "Fizz" instead of the number;
// for multiples of 5, print "Buzz."
// For numbers which are multiples of both, print "FizzBuzz."

#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf(" FizzBuzz ");
        }
        else if (i % 3 == 0) {
            printf(" Fizz ");
        }
        else if (i % 5 == 0) {
            printf(" Buzz ");
        }
        else{
            printf(" %i ", i);
        }
    }
}