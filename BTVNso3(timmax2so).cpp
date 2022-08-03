#include <stdio.h>
int main(){
	int a,b,max;
	
	printf("nhap so thu nhat : ");
	scanf("%d", &a);
	
	printf("nhap so thu 2: ");
	scanf("%d", &b);
	
	
	max=a;
	 if(max<b)
	 max=b;
	 
	 
	printf(" so lon nhat la %d", max);
	
	}
