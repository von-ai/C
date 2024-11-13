/*KONVERSI SUHU*/
#include <stdio.h>

int main(){
    float suhu, hasil;
    char pilihan;

    printf("Mau konversi celcius kemana? (F / K / R): ");
    pilihan = getchar();

    if (pilihan == 'F' || 'f')
    {
        printf("Masukkan suhu dalam celcius: ");
        scanf("%f", &suhu);
        hasil = (9 / 5 * suhu) + 32;
        printf("Suhu = %.2f", hasil);
    }else if (pilihan == 'K' || 'k')
    {
        printf("Masukkan suhu dalam celcius: ");
        scanf("%f", &suhu);
        hasil = suhu + 273;
        printf("Suhu = %.2f", hasil);
    } else if (pilihan == 'R' || 'r')
    {
        printf("Masukkan suhu dalam celcius: ");
        scanf("%f", &suhu);
        hasil = (4 / 5) * suhu;
        printf("Suhu = %.2f", hasil);
    }else
    {
        printf("Tidak valid");
    }
    return 0;
}