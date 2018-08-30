#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a,b,i,aparicio=0,nononina=0,capa=0,cnon=0,fapa,fnon;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&b);
		if(b%2==0){
			aparicio+=b;
			capa++;
		}
		else{
			nononina+=b;
			cnon++;
		}
	}
	fapa=aparicio/capa;
	fnon=nononina/cnon;
	if(fapa==fnon)
		printf("EMPATE!");
	else{
		if(fapa>fnon)
			printf("APARICIO");
		else
			printf("NONILA");
	}
	return 0;
}