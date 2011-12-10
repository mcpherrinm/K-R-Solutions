/* K&R Exercise 1-14. Write a program to print a histogram of the frequencies
 * of different characters in its input */

#include <stdio.h>

int main() {
	char histo[2 + '~' - ' '] = {0};
	int c;
	while(EOF != (c = getchar()) ) {
		if(c >= ' ' && c <= '~') {
			histo[1 + c - ' ']++;
		} else {
			histo[0]++;
		}
	}

	int i;
	for(i = 1; i < 2 + '~' - ' '; i++) {
		printf("%c: ", i + ' ' - 1);
		while(histo[i]--) {
			putchar('-');
		}
		putchar('\n');
	}
}
