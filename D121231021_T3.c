#include <stdio.h>
#include <string.h>

int main()
{
    int jumlahData;

    printf("Berapa Jumlah Data: ");
    scanf("%d", &jumlahData);
    fflush(stdin);
    char dataNilai[6][20];
    char nama[jumlahData][20], nim[jumlahData][11];
    double uas[jumlahData], quis[jumlahData], uts[jumlahData];
    double nilai[jumlahData];
    
    for (int a = 0; a < jumlahData; a++)
    {
        fflush(stdin);

        // Array 2 Dimensi
        strcpy(dataNilai[0], "NIM");
        strcpy(dataNilai[1], "Nama");
        strcpy(dataNilai[2], "Quiz");
        strcpy(dataNilai[3], "UTS");
        strcpy(dataNilai[4], "UAS");
        strcpy(dataNilai[5], "Nilai");

        // Input data
        printf("\tData Mahasiswa\n");
        printf("Masukkan Nama: ");
        scanf("%[^\n]", nama[a]);
        fflush(stdin);
        printf("Masukkan NIM: ");
        scanf("%[^\n]", nim[a]);
        fflush(stdin);
        printf("Masukkan Nilai Quiz: ");
        scanf("%lf", &quis[a]);
        fflush(stdin);
        printf("Masukkan Nilai UTS: ");
        scanf("%lf", &uts[a]);
        fflush(stdin);
        printf("Masukkan Nilai UAS: ");
        scanf("%lf", &uas[a]);
        fflush(stdin);
        nilai[a] = (quis[a] * 0.1) + (uts[a] * 0.4) + (uas[a] * 0.5);
    }

    // output
    printf("\t Daftar Nilai Mahasiswa\n");
    for (int a = 0; a < 6; a++)
    {
        printf("%s\t\t", dataNilai[a]);
    }
    puts("");
    for (int b = 0; b < jumlahData; b++)
    {
        printf("%s\t", nim[b]);
        printf("%s\t", nama[b]);
        printf("%.2lf\t\t", quis[b]);
        printf("%.2lf\t\t", uts[b]);
        printf("%.2lf\t\t", uas[b]);
        printf("%.2lf\t", nilai[b]);
        puts("");
    }
    return 0;
}