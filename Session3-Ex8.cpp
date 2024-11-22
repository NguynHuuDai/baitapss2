#include <stdio.h>

int main() {
    int num, nghin, tram, chuc, donvi, endnum;

    printf("Moi ban nhap day so co 4 chu so: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Vui long nhap so co 4 chu so.\n");
        return 1;
    }

    nghin = num / 1000;
	              
    tram = num % 1000 / 100;
	       
    chuc = num % 100 / 10;
	           
    donvi = num % 10 / 1;                

    endnum = donvi * 1000 + chuc * 100 + tram * 10 + nghin;

    printf("So dao nguoc la: %d\n", endnum);

    return 0;
}

