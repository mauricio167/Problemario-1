#include <stdio.h>
int main(int argc, char *argv[]){
	int j,n,i=0,con=0;
	scanf("%i",&n);
	struct a{
		int p;
	}a[n];
	for(i=0;i<n;i++){
		scanf("%i",&a[i].p);
	}
	j=0;
	do{
		if(a[0].p > a[j].p)
			con++;
		j++;
	}while(j!=n);
	printf("%i",con);
}