#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a,b;
	scanf("%d %d",&a,&b);
	if(a*2==b||b*2==a)
		printf("felizmil");
	else
		printf("tristemil");
	return 0;
}
