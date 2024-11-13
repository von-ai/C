#include <stdio.h>

int main(){
    int berat, ongkos;
    int nomor_paket;
    char kota;
    const int ADMINISTRASI = 1000;
    const int PERKG = 15000;
    
    do
    {
        printf("Masukkan Berat Paket (kg): ");
        scanf("%d", &berat); 
        printf("Masukkan Tujuan: ");
        scanf("%s", &kota);
    }
    while (berat > 0);
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
        for (nomor_paket = 1; nomor_paket <= 1000; nomor_paket++)
        {
            nomor_paket;
        }
        
        printf("Berikut Rincian Paket Anda\n");
        printf("Nomor Paket: %d", nomor_paket);
        printf("Berat Paket: %d", berat);
        printf("Kota Tujuan: %s", kota);
        printf("Ongkos Paket (+Biaya Administrasi): %.2f", ongkos);        
    }
    return 0;
}