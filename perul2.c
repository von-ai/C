#include <stdio.h>

int main(){
    int administrasi = 1000;
    int perkg = 15000;
    char kota[100]; // Changed to character array to store string
    int berat, ongkos, nomor_paket = 1;
    char continueInput; // Added variable to check if user wants to continue

    do {
        printf("Masukkan Berat Paket (kg): ");
        scanf("%d", &berat);

        // Consume the newline character from the previous input
        getchar();

        printf("Masukkan Tujuan: ");
        scanf("%[^\n]", kota);

        if (berat > 40) {
            ongkos = 300000 + ((berat - 40) * 1000);
        } else if (berat > 20) {
            ongkos = (300000 + ((berat - 20) * 500)) + administrasi;
        } else if (berat > 1) {
            ongkos = perkg + administrasi;
        } else {
            ongkos = 16000 + administrasi;
        }

        printf("\nBerikut Rincian Paket Anda\n");
        printf("\nNomor Paket: %d", nomor_paket);
        printf("\nBerat Paket: %d", berat);
        printf("\nKota Tujuan: %s", kota);
        printf("\nOngkos Paket (+Biaya Administrasi): %d", ongkos);

        // Ask the user if they want to continue entering packages
        printf("\nApakah Anda ingin memasukkan paket lagi? (y/n): ");
        scanf(" %c", &continueInput);

        // Consume the newline character from the previous input
        getchar();

        nomor_paket++;
    } while (continueInput == 'y' || continueInput == 'Y');

    return 0;
}
