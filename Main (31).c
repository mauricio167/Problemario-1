#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a,i,n,cont=0;
	int arreglo[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arreglo[i]);
	}
	scanf("%d",&a);
	for(i=0;i<n;i++){
		if(a==arreglo[i]){
			cont++;
		}
	}
	
	printf("%d",cont);
	return 0;
}