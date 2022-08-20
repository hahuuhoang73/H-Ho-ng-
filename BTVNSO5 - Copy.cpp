#include <stdio.h>

int tong(int n){
	int t,s=0;
	while (n!=0){
		t=n%10;
		n=n/10;
		s=s+t;
	}
	return s;
}
int main(){
	int n;
	printf("nhap n");
	scanf("%d",&n);
	int s=tong(n);
	printf("tong cac chu so cua %d la %d",n,s);
}
