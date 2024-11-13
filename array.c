#include <stdio.h>
// #define MAKS 5

// int main(){
//     int i;
//     float total = 0, rata;
//     float nilai_tes[MAKS];

//     for (i = 0; i < MAKS; i++)
//     {
//         printf("Nilai tes ke-%d : ", i+1);
//         scanf("%f", &nilai_tes[i]);
//         total = total + nilai_tes[i];
//     }
//     rata = total / MAKS;
//     printf("\nNilai rata-rata = %g\n", rata);
//     return 0;
// }

// int main(){
//     int i;
//     int values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     char word[] = {'H', 'e', 'l', 'l', 'o'};

//     for (i = 0; i < 9; i++)
//         printf("Values [%d] id %d\n", i, values[i]);
    
//     printf("\n");
//     for (i = 0; i < 6; i++)
//         printf("word[%d] is %c\n", i, word[i]);
//     return 0;
//}

//Array Dimensi dua

// int main(){
//     int tahun, kodeProgram;
//     int dataLulus[4][3];
    
//     dataLulus[0][0] = 80;
//     dataLulus[0][1] = 540;
//     dataLulus[0][2] = 1032;

//     dataLulus[1][0] = 15;
//     dataLulus[1][1] = 83;
//     dataLulus[1][2] = 301;

//     dataLulus[2][0] = 8;
//     dataLulus[2][1] = 12;
//     dataLulus[2][2] = 15;

//     dataLulus[3][0] = 10;
//     dataLulus[3][1] = 129;
//     dataLulus[3][2] = 257;

//     printf("Masukkan tahun dari data yang ingin diketahui (1998-2000) :");
//     scanf("%d", &tahun);
//     printf("Masukkan kode program kursus yang ingin anda ketahui\n");
//     printf("1 = INTRO, 2 = BASIC, 3 = PASCAL, 4 = C : ");
//     scanf("%d", &kodeProgram);
//     printf("\nTOral kelulusan program tersebut = %d\n", dataLulus[kodeProgram - 1][tahun - 1998]);
//     return 0;

// }

int main(){
    int i, j;
    int huruf_A[8][8] =
    {
        {1, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 0},
        {1, 1, 0, 0, 0, 0, 1, 0},
        {1, 1, 0, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0}
    };

    for (i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
            if (huruf_A[i][j] != 0)
            {
                putchar('\xDB');
            } else
                putchar(' ');
                putchar('\n');
    }
    return 0;
}