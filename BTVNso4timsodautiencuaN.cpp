#include <stdio.h>
int main(){
	int n,t;
	printf("nhap n: ");
	scanf("%d",&n);
	t=n;
	for(;t>9;){
		t=t/10;
		//printf("%d",n);
		}
	printf("chu so dau tien cua %d la %d",n,t);
	}
