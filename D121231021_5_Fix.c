#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define GAJI_POKOK 5000
#define JUMLAH_BURUH 100

int main(){
    struct buruh
    {
        char namaBuruh[50];
        int totalJam;
        int gajiTotal;
    } buruh;

    FILE *f_gajiburuh;
    int gaji;
    int totalBuruh = 0;
    char ulang, benar;

    f_gajiburuh = fopen("D121231021_5.dat", "wb");
    if (f_gajiburuh == NULL)
    {
        printf("File tidak dapat dibuka");
        exit(1);
    }

    do
    {
        printf("Program Ini Akan Menghitung Gaji Buruh\n\n");
        if (totalBuruh < JUMLAH_BURUH)
        {
            fflush(stdin);
            printf("Masukkan Nama buruh: ");
            scanf("%[^\n]", &buruh.namaBuruh);

            printf("Masukkan Total Jam kerja (dalam angka): ");
            scanf("%d", &buruh.totalJam);

            if ((buruh.totalJam) <= 6) {
                buruh.gajiTotal = GAJI_POKOK + ((buruh.totalJam) * 300);
            } else if (buruh.totalJam < 40) {
                buruh.gajiTotal = GAJI_POKOK + 1800 + ((buruh.totalJam - 6) * 100);
            } else if (buruh.totalJam >= 40 && buruh.totalJam <= 60) {
                buruh.gajiTotal = GAJI_POKOK + 1800 + ((buruh.totalJam - 6) * 100);
            } else if (buruh.totalJam > 60) {
                buruh.gajiTotal = GAJI_POKOK + 1800 + ((buruh.totalJam - 6) * 100) + ((buruh.totalJam - 60) * 500);
            }

            fwrite(&buruh, sizeof(buruh), 1, f_gajiburuh);
            totalBuruh++;

        } else{
            printf("Jumlah buruh telah penuh");
        }
        puts("Ingin Masukkan Lagi? [Y/T]: ");
        do
        {
            ulang = getchar();
            benar = ((ulang == 'Y') || (ulang == 'y') || (ulang == 't') || (ulang == 'T'));
        } while (!benar);
        
    } while ((ulang == 'y') || ((ulang == 'Y')));

    fclose(f_gajiburuh);
}