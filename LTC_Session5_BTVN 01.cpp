#include<stdio.h>b

int main(){
	int a, b;
	
	printf("nhap so a : ");
	scanf("%d", &a);
	
	printf("nhap so b : ");
	scanf("%d", &b);
	
	if(a>b){
		printf("a la so lon hon", a);
	} else if(b>a){
		printf("b la so lon hon", b);
	} else{
		printf("Hai so bang nhau\n");
	}
	
	return 0;
}
