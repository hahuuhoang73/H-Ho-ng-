#include <stdio.h>
int main(){
	int n,i,s;
	printf("nhap n: ");
	scanf("%d",&n);
	s=0;
	int t=n;
	while (n!=0){
		i=n%10;
		n=n/10;
		s=s+i;
		}
	printf("tong cac chu so nguyen %d la %d",t,s);
	
	}
