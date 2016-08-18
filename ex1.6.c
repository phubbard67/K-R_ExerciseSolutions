#include <stdio.h>

/* figure out if getchar() != EOF is 0 or 1 */

int main(int argc, char *argv[]){
	
	int c;

	printf("Enter some stuff: ");
	
	c = getchar() != EOF;
	
	printf("getchar() != EOF is %d\n", c);

	return -1;

}
