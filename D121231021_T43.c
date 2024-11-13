#include <stdio.h>
#include <string.h>

int main(){
    char kalimat[100];
    int spasi = 0;

    //memasukkan kalimat
    printf("Masukkan Kalimat: ");
    gets(kalimat);

    //menghitung spasi
    for (int i = 0; kalimat[i]; i++)
    {
        if (kalimat[i] == ' ')
        {
            spasi++;
        }
    }
    //menampilkan jumlah spasi
    printf("Jumlah Spasi: %d", spasi);
    return 0;
}