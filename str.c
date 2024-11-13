#include <stdio.h>
#include <string.h>

int main()
{
    char header[10][100];
    char nama[100], nim[100];
    double quiz, uts, uas, nilai;
    strcpy(header[0], "NIM");
    strcpy(header[1], "Nama");
    strcpy(header[2], "Quiz");
    strcpy(header[3], "UTS");
    strcpy(header[4], "UAS");
    strcpy(header[5], "Nilai");
    printf("Nama: ");
    scanf("%[^\n]", nama);
    fflush(stdin);
    printf("NIM: ");
    scanf("%s", nim);
    fflush(stdin);
    printf("Nilai Quiz: ");
    scanf("%lf", &quiz);
    fflush(stdin);
    printf("Nilai UTS: ");
    scanf("%lf", &uts);
    fflush(stdin);
    printf("Nilai UAS: ");
    scanf("%lf", &uas);
    fflush(stdin);
    nilai = (quiz * 0.1) + (uts * 0.4) + (uas * 0.5);
    printf("\tDaftar Nilai\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%s\t", header[i]);
    }
    puts("");
    printf("%s\t%s\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", nim, nama, quiz, uts, uas, nilai);
    return 0;
}