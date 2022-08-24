#include <stdio.h>
#include <math.h>
float tong(int n){
	float t=0;
	for (int i=1;i<=n;i++){
		t=t+1/(float)i;
	
	}
	return t;
}

int main(){
	int n;
	printf("nhap vao so nguyen n:");
	scanf("%d",&n);
	if (n>0){
	float t=tong(n);
	printf("tong la=%.2f",t);	
	}else{
	printf("ban da nhap loi");	
	}
}
