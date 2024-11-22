#include<stdio.h>
int main(){
	float high, deep, dienTich;
	printf("Moi ban nhap chieu dai day: ");
	scanf("%f", &high);
    printf("Moi ban nhap chieu cao : ");
	scanf("%f", &deep);
	dienTich = (high * deep) / 2; 
	printf("Dien tich cua hinh tam giac la : %.2f", dienTich);
	return 0;
	
}


