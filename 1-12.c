/* K&R Exercise 1-12. Write a program that prints its input one word per line.
 */

#include <stdio.h>

#define IN  1
#define OUT 0

int main() {
	int c, state, prevword;
	prevword = 0;
	state = OUT;

	while ((c = getchar()) != EOF) {
		if(c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		} else {
			if(state == OUT) {
				state = IN;
				if(prevword) {
					putchar('\n');
				} else {
					prevword = 1;
				}
			}
			putchar(c);
		}
	}
	putchar('\n');
	return 0;
}

