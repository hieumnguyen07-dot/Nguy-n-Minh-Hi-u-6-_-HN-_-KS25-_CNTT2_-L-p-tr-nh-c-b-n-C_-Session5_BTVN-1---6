#include <stdio.h>

int main(){
	int tuoi;
    int Giave;
    int SoTien;
	
	printf("Nhap so tuoi :");
	scanf("%d", &tuoi);

    if (tuoi < 0 || tuoi > 120) {
        printf("Tuoi khong hop le\n");
    } 
    else if (tuoi < 6) {
        SoTien = 0;
        printf("SoTien ve : %d VNÐ\n", SoTien);
    } 
    else if (tuoi <= 18) {
        SoTien = GiaVe * 50 / 100;
        printf("SoTien ve : %d VNÐ\n", SoTien);
    } 
    else if (tuoi <= 60) {
        SoTien = GiaVe;
        printf("SoTien ve : %d VNÐ\n", SoTien);
    } 
    else {
        SoTien = GiaVe * 70 / 100;
        printf("SoTien ve : %d VNÐ\n", SoTien);
    }

    return 0;
}
