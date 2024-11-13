#include <stdio.h>
#include <string.h>

int main(){
    char kalimat[100];
    int hurufBesar = 0, hurufKecil = 0;

    //memasukkan kalimat
    puts("PROGRAM INI AKAN MENGHITUNG JUMLAH HURUF BESAR DAN KECIL\n");
    puts("Masukkan Kalimat/Kata: ");
    gets(kalimat);

    //menghitung huruf besar dan kecil
    for (int i = 0; kalimat[i] != '\0'; i++ )
    {
        if (kalimat[i] >= 'A' && kalimat[i] <= 'Z')
        {
            hurufBesar++;
        } else if (kalimat[i] >= 'a' && kalimat[i] <= 'z')
        {
            hurufKecil++;
        }
    }
    
    //menampilkan jumlah huruf
    printf("Jumlah Huruf Besar = %d\n", hurufBesar);
    printf("Jumlah Huruf Kecil = %d", hurufKecil);
    return 0;
}