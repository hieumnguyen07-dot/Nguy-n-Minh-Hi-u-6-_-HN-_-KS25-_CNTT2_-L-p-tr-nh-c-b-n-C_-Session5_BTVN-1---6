#include<stdio.h>

int main(){
	int a, b;
	
	printf("nhap so a : ");
	scanf("%d", &a);
	
	printf("nhap so b : ");
	scanf("%d", &b);
	
	if(a==0){
		if(b==0){
			printf("phuong trinh co vo so nghiem\n");
		}else{
			printf("phuong trinh vo nghiem\n");
		}
	}else{
		float x = -b / a;
		printf("phuong trinh co nghiem x = %.2f\n", x);
	}
	
	return 0;
}
