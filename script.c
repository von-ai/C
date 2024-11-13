#include <stdio.h>

int main(){
    int administrasi = 1000;
    int perkg = 15000;
    char kota;
    int berat, ongkos, nomor_paket;

    for(nomor_paket =1 ; ; nomor_paket++){
        printf("Masukkan Berat Paket (kg): ");
        scanf("%d", &berat);
        printf("Masukkan Tujuan: ");
        scanf("%s", &kota);

        if (berat > 1)
        {
            ongkos = perkg + administrasi;
        } else if (berat < 1)
        {
            ongkos = 16000 + administrasi;
        } else if (berat > 20)
        {
            ongkos = (300000 + ((berat - 20) * 500)) + administrasi;
        } else if (berat > 40)
        {
            ongkos = 300000 + ((berat - 40) * 1000);
        }
        printf("\nBerikut Rincian Paket Anda\n");
        printf("\nNomor Paket: %d", nomor_paket);
        printf("\nBerat Paket: %d", berat);
        printf("\nKota Tujuan: %s", kota);
        printf("\nOngkos Paket (+Biaya Administrasi): %d", ongkos);
    }
}