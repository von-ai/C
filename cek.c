#include <stdio.h>

int main(){
    int tinggi_segitiga, i, j, k;
    printf("Masukkan Tinggi Segitiga : ");
    scanf("%d", &tinggi_segitiga);

    for ( i = 1; i <= tinggi_segitiga; i++)
    {
        for (j = 1; j <= tinggi_segitiga-i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}