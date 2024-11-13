#include <stdio.h>

int main(){
    char pilihan;
    int sudah_benar;

    printf ("Masukkan huruf Y/T: ");
    do
    {
        pilihan = getchar();
        sudah_benar = (pilihan == 'Y' || 'y') || (pilihan == 'T' || 't');
    } while (! sudah_benar);

    switch (pilihan)
    {
    case 'Y':
    case 'y':
        printf("Pilihan anda Y");
        break;
    case 'T':
    case 't':
        printf("Pilihan anda T");
        break;
    }
    return 0;
}