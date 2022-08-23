#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,cv,p,s,p2;
	printf("nhap a: ");scanf("%d", &a);
	printf("nhap b: ");scanf("%d", &b);
	printf("nhap c: ");scanf("%d", &c);
	
	if (a+b>c && a+c>b && c+b>a){
		
	    p=a+b+c; 
	      
	    float p2= (float)p/2;//doi ve so nguyen
	      
	    s=sqrt(p2*(p2-a)*(p2-b)*(p2-c)); 
	      
	      printf("\ndien tich tam giac s = %d", s);
	      printf("\nchu vi tam giac cv = %d", p);
	      
	      
	      }else{
	      	printf("khong la tam giac");
	      	}
	      	
		  }
