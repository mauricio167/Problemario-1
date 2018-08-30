#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,i,c,sum,aux=0,j;
	scanf("%d %d",&a,&c);
	int *b=malloc(a*sizeof(int));
	for(i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<a-c;i++){
		sum=0;
		for(j=0;j<c;j++){
			sum+=b[i+j];
		}
		if(sum>aux){
			aux=sum;
		}
	}
	printf("%d",aux);
	free(b);
	return 0;
}