#include <unistd.h> 
#include <stdio.h> 
int main () {
	int a = 0; 
	int b = 1;
	if (a != b) {
		printf("a not equal to b");
	} else (a == b ) {
		printf("b equal to a");
	}
	if (a > b ) {
		printf("a > b");
	} else {
		printf("b > a");
	}
	
	return (0);
}
