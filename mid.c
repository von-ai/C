#include <stdio.h>

int main(){
    const SURAT = 60000;
    const perm = 5000;
    int x = 0;
    char benar, ulang;

    struct Tanah
    {
        char pegawai[100];
        char jabatan[100];
        int luas;
        int harga;
    };

    FILE *f_data;

    f_data = fopen("NIM_5.dat", "rb");
    if (f_data == NULL)
    {
        printf("Data tidak ditemukan.\n");
        exit(1);
    }

    do
    {
        
        printf("Masukkan nama pegawai: ");
        scanf("[^\n]", &larik[i].pegawai);
        fflush(stdin);

        printf("Masukkan jabatan: ");
        scanf("[^\n]", &larik[i].jabatan);
        fflush(stdin);

        printf("Masukkan Luas tanah: ");
        scanf("%d", &larik[i].luas);
        fflush(stdin);

        if (larik[i].luas >= 80)
        {
            if (larik[i].luas < 200)
            {
                larik[i].harga = (larik[i].luas * perm) + SURAT;
            } else if (larik[i].luas < 500)
            {
                larik[i].harga = (200 * perm) + ((larik[i].luas - 200) * 1000) + SURAT;
            } else if (larik[i].luas > 500)
            {
                larik[i].harga = (200 * perm) + (300000) + ((larik[i].luas - 500) * 2000) + SURAT;
            }
        }
        puts("Ingin Masukkan Lagi? [Y/T]: ");
        do
        {
            ulang = getchar();
            benar = ((ulang == 'Y') || (ulang == 'y') || (ulang == 't') || (ulang == 'T'));
        } while (!benar);
    } while ((ulang == 'y') || ((ulang == 'Y')));
    

    
}