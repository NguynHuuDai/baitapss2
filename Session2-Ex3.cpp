#include <stdio.h>
#include <math.h> 

int main() {
	
	float r, p, s;
	printf("Nhap ban kinh hinh tron (r): ");
	scanf("%f", &r);
	
	p = 2 * M_PI * r;
	s = M_PI * r * r;
	
	printf("Chu vi hinh tron: %.2f\n", p);
    printf("Dien tich hinh tron: %.2f\n", s);
}
