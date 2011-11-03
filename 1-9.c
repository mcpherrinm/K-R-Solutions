/* K&R Exercise 1-9: Write a program to copy its input to its output, replacing
 * each string of one or more blanks by a single blank */

 #include <stdio.h>

main()
{
	int c, inblank;
	inblank = 0;
	while(( c=getchar() ) != EOF ) {
		if(c != ' ') {
			inblank = 0;
			putchar(c);
		} else if(!inblank) {
			inblank = 1;
			putchar(' ');
		}
	}
}
