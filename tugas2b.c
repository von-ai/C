#include <stdio.h>

int main(){
    int sum = 65, tebak;

    printf("Masukkan Angka: ");
    scanf("%d", &tebak);
    if (tebak < sum)
    {
        printf("Maaf, Anda Harus Mencoba Lagi");
    }
    else if (tebak == sum)
    {
        printf("Nilai: %d", sum);
    }
    else if (sum != tebak)
    {
        printf("Nilai tebak: %d", tebak);
    }
    else if (sum == 10 && tebak < 20)
    {
        printf("Tidak Sesuai");
    }
    else
    {
        printf("Yang anda masukkan bukan angka");
    }
    return 0;
}