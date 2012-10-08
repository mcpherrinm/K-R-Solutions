/* K&R Exercise 1-17. Write a program to print all input lines that are longer
 * 80 characters. */

#include <stdio.h>

#define OVERLEN 80

int main() {
	int len = 0;
	char c, buf[OVERLEN];
	while( EOF != (c=getchar()) ) {
		if(c == '\n') {
			if(len >= OVERLEN)
				putchar('\n');
			len = 0;
		} else if(len > OVERLEN) {
			putchar(c);
			len++;
		} else if (len == OVERLEN) {
			int i;
			for(i=0;i<len;i++)
				putchar(buf[i]);
			putchar(c);
			len++;
		} else {
			buf[len] = c;
			len++;
		}
	}
}
