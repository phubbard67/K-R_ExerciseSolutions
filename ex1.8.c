#include <stdio.h>

/* code that counts blanks, tabs and newline chars */

int main(int argc, char *argv[]){
	
	int c, blanks, newline, tabs;
	blanks = newline = tabs = c = 0;

	printf("\n\tEnter stuff and to get results press ` and then enter:\n\n\t");

	while((c = getchar()) != EOF){
		if(c == '\n'){
			printf("\t");
			newline++;
		}
		else if(c == '\t'){
			tabs++;
		}
		else if(c == ' '){
			blanks++;
		}
		else if(c == '`'){
			newline = newline + 1;
			printf("\n\tBlank spaces = %d, Tabs = %d, New lines = %d\n", blanks, tabs, newline);
			return -1;
		}
	}


}
