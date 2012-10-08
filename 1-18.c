/* K&R Exercise 1-18.  Write a program to remove trailing blanks and tabs from
 * each line of input, and to delete entirely blank lines */

#include <stdio.h>

/* How many characters of whitespace do we store */
#define MAXL 512

int main() {
	int len = 0;
	int nonempty = 0;
	char c, whitebuf[MAXL];
	while( EOF != (c=getchar()) ) {
		if(c == '\n') {
			len = 0;
			if(nonempty) {
				putchar('\n');
			}
			nonempty = 0;
		} else if(c == ' ' || c == '\t' ){
			whitebuf[len++] = c;
		} else {
			if(!nonempty) {
				nonempty=1;
			}
			if(len != 0) {
				whitebuf[len]='\0';
				printf("%s", whitebuf);
				len = 0;
			}
			putchar(c);
		}
	}
}
