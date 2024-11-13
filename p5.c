#include <stdio.h>

int main(){
	double discount = 0;
	double total_pembelian;
	printf("Masukkan Total Pembelian: ");
	scanf("%lf", &total_pembelian);
	
	if(total_pembelian >= 100000)
	discount = 0.05 * total_pembelian;
	printf("Total Discount Anda = %lf", discount);
	return 0;
}

