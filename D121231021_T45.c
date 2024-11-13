#include <stdio.h>
#include <string.h>

int main(){
    char kalimat[100];
    char balik[100]; 
    int panjang, j = 0;

    puts("PROGRAM INI AKAN MENDETEKSI KALIMAT PALINDROM");
    printf("Masukkan Sebuah Kalimat: ");
    gets(kalimat);

    panjang = strlen(kalimat);

    for (int i = panjang - 1; i >= 0; i--)
    {
        balik[j++] = kalimat[i];
    }
    balik[j] = '\0';
    
    if (strcmp(kalimat, balik) == 0)
    {
        printf("Kalimat tersebut palindrom\n");
    }else
    {
        printf("Kalimat tidak palindrom");
    }
    
    return 0;
}