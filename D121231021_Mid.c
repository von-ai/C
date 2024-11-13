#include <stdio.h>
#define ADMINISTRASI 1000
#define PERKG 15000
int main(){
    char kota;
    int berat, ongkos, nomor_paket;

    do
    {
        printf("Masukkan Berat Paket (kg): ");
        scanf("%d", &berat);
        printf("Masukkan Tujuan: ");
        scanf("%s", &kota);
    
        {
            if (berat > 1)
            {
                ongkos = PERKG + ADMINISTRASI;
            } else if (berat < 1)
            {
                ongkos = 16000 + ADMINISTRASI;
            } else if (berat > 20)
            {
                ongkos = (300000 + ((berat - 20) * 500)) + ADMINISTRASI;
            } else if (berat > 40)
            {
                ongkos = 300000 + ((berat - 40) * 1000);
            }

            for (nomor_paket = 1;;nomor_paket++)
            {
                nomor_paket;
            }
        }
        printf("\nBerikut Rincian Paket Anda\n");
        printf("\nNomor Paket: %d", nomor_paket);
        printf("\nBerat Paket: %d", berat);
        printf("\nKota Tujuan: %s", kota);
        printf("\nOngkos Paket (+Biaya Administrasi): %d", ongkos);
    } while (berat > 0);
    return 0;
}