#include <unistd.h> 
#include <stdio.h> 
int main () {
	int digit;
	int digit2;

	printf("n1=");
	scanf("%d",&digit);
	printf("n2=");
	scanf("%d",&digit2);
	if (digit > digit2) {
	    printf("N1 > N2\n");
	   printf("%s %d","Result N1 - N2 is :",digit - digit2);
	} else if (digit < digit2) {
	   printf("N1 < N2 \n");
	   printf("%s %d","Result N1 - N2 is :",digit2 - digit);
	}
	return (0);
};
