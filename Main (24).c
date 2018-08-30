#include <stdio.h>

int main(int argc, char *argv[]) {
int c1,c2,c3,prom;
	scanf("%i %i %i",&c1,&c2,&c3);
	prom=(c1+c2+c3)/3;
	if(prom>5){
		printf("1");
	}else{
		printf("0");
	}
	return 0;
}