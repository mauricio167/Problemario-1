#include <stdio.h>
int main(int argc, char *argv[]) {
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b&&a>=c){
		printf("El numero mayor es %d",a);
	}else{
		if(b>c){
			printf("El numero mayor es %d",b);
		}else{
			printf("El numero mayor es %d",c);
		}
	}
	return 0;
}