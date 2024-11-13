#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *f_anime;
    int jum_data;
    char ulang;
    int benar;

    struct anime
    {
        char judul[30];
        char pengarang[30];
        int jum_eps;
    } anime;
    
    f_anime = fopen("Daftar Anime.dat", "w");
    if (f_anime == NULL)
    {
        printf("File tidak dapat dibuka");
        exit(1);
    }

    printf("Memasukkan List Anime ke Dalam File\n\n");

    do
    {
        fflush(stdin);
        printf("Masukkan Judul Anime: ");
        gets(anime.judul);

        printf("Masukkan Pengarang Anime: ");
        gets(anime.pengarang);

        printf("Masukkan Jumlah Episode: ");
        scanf("%d", &anime.jum_eps);

        fflush(stdin);
        
        fwrite(&anime, sizeof(anime), 1, f_anime);

        printf("Ingin memasukkan data lagi? Y/T: ");

        do
        {
            ulang = getchar();
            benar = ((ulang == 'Y') || (ulang == 'y') || (ulang == 't') || (ulang == 'T'));
        } while (!benar);
    } while ((ulang == 'y') || (ulang == 'Y'));

    fclose(f_anime);
}