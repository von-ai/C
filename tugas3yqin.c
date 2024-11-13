#include <stdio.h>
#include <string.h>

int main()
{
    int jumlahData;

    printf("Berapa Jumlah Data: ");
    scanf("%d", &jumlahData);
    fflush(stdin);
    char dataNilai[6][20];
    char nama[jumlahData][20], nim[jumlahData][10];
    double uas[jumlahData], quis[jumlahData], uts[jumlahData];
    double nilai[jumlahData];
    memset(dataNilai, 0, sizeof(dataNilai));
    memset(nama, 0, sizeof(nama));
    memset(nim, 0, sizeof(nim));
    memset(uas, 0, sizeof(uas));
    memset(quis, 0, sizeof(quis));
    memset(uts, 0, sizeof(uts));
    memset(nilai, 0, sizeof(nilai));
    // Array 2 Dimensi
    strcpy(dataNilai[0], "NIM");
    strcpy(dataNilai[1], "Nama");
    strcpy(dataNilai[2], "Quiz");
    strcpy(dataNilai[3], "UTS");
    strcpy(dataNilai[4], "UAS");
    strcpy(dataNilai[5], "Nilai");
    for (int a = 0; a < jumlahData; a++)
    {
        fflush(stdin);
        // Input data
        printf("\tData Mahasiswa\n");
        printf("Masukkan Nama: ");
        scanf("%[^\n]", nama[a]);
        fflush(stdin);
        printf("Masukkan NIM: ");
        scanf("%s", nim[a]);
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
        printf("%s\t", dataNilai[a]);
    }
    puts("");
    for (int b = 0; b < jumlahData; b++)
    {
        printf("%s\t", nim[b]);
        printf("%s\t", nama[b]);
        printf("%.2lf\t", quis[b]);
        printf("%.2lf\t", uts[b]);
        printf("%.2lf\t", uas[b]);
        printf("%.2lf\t", nilai[b]);
        puts("");
    }
    return 0;
}