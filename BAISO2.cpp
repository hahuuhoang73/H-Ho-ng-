#include <stdio.h>
void nhapmang(int ary[],int n){
	for (int i=0;i<n;i++){
		printf("ary[%d]=",i);
		scanf("%d",&ary[i]);
	}
}
void reverseArray(int ary[],int n){
	printf("mang sau khi dao nguoc la:");
	for (int i=n-1;i>=0;i--){
		printf("\t%d",ary[i]);
	}
}
int main(){
	int ary[1000],n;
	do{
	
	printf("nhap phan so phan tu mang:");
	scanf("%d",&n);
     }while(n<=0);
     
	nhapmang(ary,n);
	reverseArray(ary,n);
}

