#include <stdio.h>

int main(){
	float a, b, c;
	printf("Masukkan Nilai A: ");
	scanf("%f", &a);
	printf("Masukkan Nilai B: ");
	scanf("%f", &b);
	c = a / b;
	if(b == 0)
		printf("Hasil Tak terhingga");
	else
		printf("Hasil bagi = %.2f", c);
	return 0;
}