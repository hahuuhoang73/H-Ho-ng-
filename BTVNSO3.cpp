#include <stdio.h>
int main(){
	int n;
	do {
		
		printf("nhap n >0 :");
      scanf("%d",&n);
      if (n<0){
	printf("\nnhap sai yêu cau nhao lai n");}	
		}while (n<0); 
	
	if (n==1 || n==2){
          printf("so Fibonaci thu %d la 1",n);
		}else{
			int f1=1,f2=1,fn;
		int i;
	  for(i=3;i<=n;i++){
			  
	  fn=f1+f2;
	  f1=f2;
	  f2=fn;
	  }
	  
 printf("so Fibonaci thu %d la %d",n,fn);}	
	  }	


