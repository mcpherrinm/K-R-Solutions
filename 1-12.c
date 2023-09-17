/* K&R Exercise 1-12. Write a program that prints its input one word per line.
 */

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, word, state, previousState;

    state = OUT;
    
    while ((c=getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c =='\t') {
            previousState = state;
            state = OUT;
            if (previousState == IN)
                putchar('\n');
        } else if (state == OUT) {
            previousState= state;
            state = IN;
            putchar(c);
        } else
            putchar(c);
    }
return 0;
}

