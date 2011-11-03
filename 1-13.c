/* Write a program to print a histogram of the length of words in its input. It
 * is easy to draw the histogram with bars horizontal; a vertical orientation
 * is more challenging. */

#include <stdio.h>

int main() {
	int c;
	int lengthcount[256]; /* words of length 0 to 256 */
	int curlen = 0;
	int longest = 0;
	for(c = 0; c < 256; c++) {
		lengthcount[c] = 0;
	}
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\t' || c == '\n') {
			if(curlen != 0) {
				lengthcount[curlen] += 1;
				if(curlen > longest)
					longest = curlen;
				curlen = 0;
			}
		} else {
			curlen++;
		}
	}
	for(c = 1;c <= longest; c++) {
		printf("%8d: ", c);
		int i;
		for(i = 0; i < lengthcount[c]; i++) {
			putchar('#');
		}
		putchar('\n');
	}
	return 0;
}
