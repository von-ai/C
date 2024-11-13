#include <stdio.h>
#include <string.h>

int main(){
    char nama[30];
    int panjang;
    
    //memasukkan nama
    printf("Masukkan Nama Anda: ");
    gets(nama);
    //menghitung panjang nama
    panjang= strlen(nama);

    //membalik nama
    for (int i = panjang; i >= 0; i--)
    {
        //mengubah huruf kecil ke huruf besar
        if (nama[i] >= 'a' && nama[i] <= 'z')
        {
            nama[i] -= 32;
        }
        //menampilkan output
        printf("%c", nama[i]);
    }
    return 0;
}