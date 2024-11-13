#include <stdio.h>

int main(){
    int sum, tebak, total;
    printf("Masukkan Nilai SUM: ");
    scanf("%d", &sum);
    printf("Masukkan Nilai Tebak: ");
    scanf("%d", &tebak);
    printf("Masukkan Nilai Total: ");
    scanf("%d", &total);
    if (sum < 65) //Nomor Satu
    {
        printf("\nMaaf, Anda harus mencoba lagi\n");
    }
    else
        printf("SUM = %d \n", sum);

    if (total == tebak) //Nomor Dua
    {
        printf("Nilai Total = %d \n", total);
    }
    else
    {
        printf("Nilai Tebak = %d \n", tebak);
    }

    if (sum == 10 && total < 20) //Nomor tiga
    {
        printf("Tidak Sesuai\n");
    }
    return 0;
}