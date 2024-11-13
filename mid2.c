#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PERM 5000
#define JUMLAH_ORANG 100
#define SURAT 60000

int main(){
    struct tanah
    {
        char pegawai[50];
        char jabatan;
        int luas;
        int harga;
    } tanah;

    FILE *f_tanah;
    int totalorng = 0;
    char ulang, benar;

    f_tanah = fopen("D121231021_5.dat", "wb");
    if (f_tanah == NULL)
    {
        printf("File tidak dapat dibuka");
        exit(1);
    }

    do
    {
        printf("Program Ini Akan Menghitung Harga Tanah\n\n");
        if (totalorng < JUMLAH_ORANG)
        {
            fflush(stdin);
            printf("Masukkan Nama Pegawai: ");
            scanf("%[^\n]", &tanah.pegawai);

            printf("Masukkan Nama Jabatan: ");
            scanf("%[^\n]", &tanah.jabatan);

            printf("Masukkan Luas Tanah: ");
            scanf("%d", &tanah.luas);

            if (tanah.luas >= 80)
            {
                if (tanah.luas < 200)
                {
                    tanah.harga = (tanah.luas * PERM) + SURAT;
                } else if (tanah.luas < 500)
                {
                    tanah.harga = (200 * PERM) + ((tanah.luas - 200) * 1000) + SURAT;
                } else if (tanah.luas > 500)
                {
                    tanah.harga = (200 * PERM) + (300000) + ((tanah.luas- 500) * 2000) + SURAT;
                }
            }

            fwrite(&tanah, sizeof(tanah), 1, f_tanah);
            totalorng++;

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

    fclose(f_tanah);
}