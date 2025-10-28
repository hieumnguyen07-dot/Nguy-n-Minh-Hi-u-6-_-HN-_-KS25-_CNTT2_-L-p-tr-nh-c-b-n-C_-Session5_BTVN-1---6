#include <stdio.h>

int main(){
	float ThuNhap;
	float Thue;
	float ThueSuat;
	
	printf("So tien : ");
	scanf("%f", &ThuNhap);

	Thue = ThuNhap * (ThueSuat / 100);
	if(ThuNhap <= 5)
	   ThueSuat = 5;
	else if(ThuNhap <= 10)
	   ThueSuat = 10;
	else
	   ThueSuat = 15;
	   printf("Thue thu nhap phai dong : %.2f\n", Thue);
	
	   
	return 0;
	
}
