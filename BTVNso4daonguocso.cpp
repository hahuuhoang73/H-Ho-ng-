#include <stdio.h>
int main(){
	int n,l,dn,i;
	printf(" nhap n ");
	scanf("%d",&n);
	printf("so duoc dao nguoc la :");
	while (n!=0){
		i=n%10;
		
		n=n/10;
		
		printf("%d",i);
		}
	//printf("so duoc dao nguoc la %d",i);
	}
