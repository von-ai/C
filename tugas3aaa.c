#include <stdio.h>
#include <string.h>

int main(){
    int jumlahData;

    printf("Berapa Jumlah Data: ");
    scanf("%d", &jumlahData);
    puts("");

    char dataNilai[6][20];
    char nama[jumlahData][20], nim[jumlahData][10];
    int uas[jumlahData], quis[jumlahData], uts[jumlahData];
    float nilai[jumlahData];

    for (int a = 0; a < jumlahData; a++)
    {
        fflush(stdin);

        //Array 2 Dimensi
        strcpy(dataNilai[0], "NIM");
        strcpy(dataNilai[1], "Nama");
        strcpy(dataNilai[2], "Quiz");
        strcpy(dataNilai[3], "UTS");
        strcpy(dataNilai[4], "UAS");
        strcpy(dataNilai[5], "Nilai");

        //Input data
        printf("\tData Mahasiswa\n");
        printf("Masukkan Nama: ");
        scanf("%[^\n]", &nama[a]);
        fflush(stdin);
        printf("Masukkan NIM: ");
        scanf("%s", &nim[a]);
        fflush(stdin);
        printf("Masukkan Nilai Quiz: ");
        scanf("%f", &quis[a]);
        fflush(stdin);
        printf("Masukkan Nilai UTS: ");
        scanf("%f", &uts[a]);
        fflush(stdin);
        printf("Masukkan Nilai UAS: ");
        scanf("%f", &uas[a]);
        fflush(stdin);
    }
    
    
    //akumulasi Nilai
    for (int b = 0; b < jumlahData; b++)
    {
        nilai[b] =  (quis[b] * 0.1) + (uts[b] * 0.4) + (uas[b] * 0.5);
    }
    

    //output
    printf("\t Daftar Nilai Mahasiswa\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%s\t", dataNilai[i]);
    }
    for (int b = 0; b < jumlahData; b++)
    {
        puts("");
        printf("%s\t%s\t%d\t%d\t%d\t%.2f", nim[b], nama[b], uts[b], uas[b], nilai[b]);
    }
    return 0;   
}