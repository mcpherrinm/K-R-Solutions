/* K&R Exercise 1-16. Revise the main routine of the longest-line program so it
 * will correctly print the length of arbitrary long input lines, and as much
 * possible of the text */

#include <stdio.h>
#define MAXLINE 80 /* maximum input line length */

int mgetline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = mgetline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%d: %s", max, longest);
	return 0;
}

/* getline: read a line into s, return length */
int mgetline(char s[], int lim) {
	int c, i;

	for(i=0; (c=getchar())!=EOF && c!='\n'; ++i) {
		if(i < lim)
			s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i;

	i = 0;
	while((to[i] = from[i]) != 0) ++i;
}
