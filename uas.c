#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define GAJI_POKOK 5000
#define JUMLAH_BURUH 100

struct Buruh
{
    char namaBuruh[50];
    int totalJam;
    int gajiTotal;
} Buruh;

int main(){
    FILE *gajiburuh;
    struct Buruh buruhs;
    int gaji;
    int totalBuruh;
    char ulang, benar;

    gajiburuh = fopen("D121231021_5.dat", "w");
    if (gajiburuh == NULL)
    {
        printf("File tidak dapat dibuka");
        exit(1);
    }

    do
    {
        printf("Program Ini Akan Menghitung Gaji Buruh\n\n");
        if (totalBuruh <= JUMLAH_BURUH)
        {
            fflush(stdin);
            printf("Masukkan Nama buruh: ");
            scanf("%[^\n]", &buruhs.namaBuruh);

            fflush(stdin);
            printf("Masukkan Total Jam kerja (dalam angka): ");
            scanf("%d", &buruhs.totalJam);

            if ((buruhs.totalJam) <= 6)
            {
                buruhs.gajiTotal = GAJI_POKOK + ((buruhs.totalJam) * 300);
            } else if (buruhs.totalJam < 40) 
            {
                buruhs.gajiTotal = GAJI_POKOK + 1800 + ((buruhs.totalJam - 6) * 100);
            } else if (buruhs.totalJam > 60)
            {
                buruhs.gajiTotal = GAJI_POKOK + 1800 + ((buruhs.totalJam - 6) * 100) + ((buruhs.totalJam - 66) * 500);
            }
            fwrite(&Buruh, sizeof(Buruh), 1, gajiburuh);

        }
        puts("Ingin Masukkan Lagi? [Y/T]: ");
        do
        {
            ulang = getchar();
            benar = ((ulang == 'Y') || (ulang == 'y') || (ulang == 't') || (ulang == 'T'));
        } while (!benar);
        
    } while ((ulang == 'y') || ((ulang == 'Y')));

    fclose(gajiburuh);
}