#include <stdio.h>
bool tamgiac(int a,int b,int c){
	if (a+b>c && a+c>b && b+c>a){
		return true;
		}else{ 
		return false;}
	}
	
int chuvi(int a,int b, int c){
int cv;
  cv=a+b+c;
  return cv;
}

int main(){
   int a,b,c;
  printf("nhap a");
  scanf("%d",&a);
   printf("nhap b");
  scanf("%d",&b);
   printf("nhap c");
  scanf("%d",&c);
 // int cv=chuvi(a,b,c);
  if (tamgiac(a,b,c)){
  	
   int cv=chuvi(a,b,c);
   printf("%d",cv);
   }else{
   	printf("ban nhap khong phai la tam giac");
   }
}	
	
	
