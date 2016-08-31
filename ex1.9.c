#include <stdio.h>

/* code that replaces more than one blank 
   space with just one blank space */

int main(int argc, char *argv[]){
	
	int c, blanks;
	blanks = 0;

	printf("\n\tEnter stuff, and to get results press ` and then enter: \n\n\t");

	while((c = getchar()) != EOF){
		if(c == '`'){
			c = '\n';
			putchar(c);
			return -1;
		}
		else if(c == '\t' || c == ' ' || c == '\n'){
			c = ' ';
			blanks++;
			if(blanks > 1){
				c = 0;
			}
			putchar(c);
		}
		else{
			putchar(c);
			blanks = 0;
		}

	}

}
