#include <stdio.h>
int main(){
	int n,i;
	do {
		printf("nhap n>0: ");
		scanf("%d",&n);
		}while (n<0);
	int s;	
	for (i=1;i<=n;i++){
	  s=s*i;
	  }
	  printf("gia thua cua %d!=%d",n,s);
	}
