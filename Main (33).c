#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,a[1000000],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if((a[i]%3==0)&&(a[i]%5==0)){
			printf("FizzBozz\n");
		}else{
			if((a[i]%3==0)){
				printf("Fizz\n");
			}else{
				if((a[i]%5==0)){
					printf("Bozz\n");
				}else{
					if((a[i]%3!=0)&&(a[i]%5!=0)){
						printf("NoFIzzBozz\n");
					}
				}
			}
		}
	}
	return 0;
}