#include <stdio.h>
int main (){
	char ki_tu ;
	printf("Nhap ki tu :");
	scanf("%c" , &ki_tu);
	if(ki_tu >= 'a' && ki_tu <= 'z'){
		printf("Ki tu hoa tuong ung : %c" , ki_tu - 32);
	}else if(ki_tu >= 'A' && ki_tu <= 'Z'){
		printf("Ki tu thuong tuong ung : %c" , ki_tu + 32);
	}else {
		printf("ki tu khong hop le");
	} 
	return 0 ;
}
	
