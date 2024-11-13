#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f_anime;
    int i=1;

    struct anime
    {
        char judul[30];
        char pengarang[30];
        int jum_eps;
    } anime;

    f_anime = fopen("Daftar Anime.dat", "rb");
    if (f_anime == NULL)
    {
        printf("File tidak dapat dibuka\n");
        exit(1);
    }

    printf("%2s. %-15s %-15s %s\n", "No", "Judul Anime", "Pengarang", "Jumlah Eps");
    
    while (fread(&anime, sizeof(anime), 1, f_anime) == 1)
    {
        printf("%2d. %-15s %-15s %d\n", i++, anime.judul, anime.pengarang, anime.jum_eps);
    }

    puts("");
    fclose(f_anime);
}