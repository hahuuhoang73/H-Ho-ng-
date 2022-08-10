#include <stdio.h>
int main(){
	int max,m,n,a[10000],i;
	printf("nhap n:");
	scanf("%d",&n);
	i=1;
	int x=n;
	while (n!=0){
		a[i]=n%10;
		i++;
		n=n/10;
		}
		 max=a[1];
		m=i-1;
		for (i=1;i<=m;i++){
		if (max<a[i])
		  max=a[i];}
		printf("chu so lon nhat cua so nguyen duong %d la %d",x,max);
	}
