#include <stdio.h>

int main (){
    int rating1, rating2 , rating3 , rating4 ;
    float ratarata = 0;
    char namamenu[30];

    printf("Nama Menu: ");
    fgets(namamenu, sizeof(namamenu), stdin);  // Menggunakan fgets untuk menghindari masalah pada scanf
    
    printf("\nRating ke-1: ");
    scanf("%d", &rating1);
    printf("Rating ke-2: ");
    scanf("%d", &rating2);
    printf("Rating ke-3: ");
    scanf("%d", &rating3);
    printf("Rating ke-4: ");
    scanf("%d", &rating4);

    ratarata = (rating1 + rating2 + rating3 + rating4) / 4.0;  // Menambahkan .0 untuk memastikan pembagian float
    
    if (ratarata >= 7.5) {
        printf("Rata-rata penilaian: %.1f\n", ratarata);
        printf("%s LULUS menjadi menu permanen\n", namamenu);
    } else {
        printf("Rata-rata penilaian: %.1f\n", ratarata);
        printf("%s tidak LULUS menjadi menu permanen\n", namamenu);
    }

    return 0;
}
