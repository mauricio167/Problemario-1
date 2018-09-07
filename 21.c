#include <stdio.h>

int main(int argc, char *argv[])
{
	int m,n;
	scanf ("%i",&m);
	n=m%2;
	if (n==0){
		printf ("Par");
	}	else {
		printf ("Impar");
	}
	return 0;
}
