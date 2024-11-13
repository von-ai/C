#include <stdio.h>

int main() {
    //DEKLARASI VARIABEL
    char nama[30];
    char jurusan[30];
    char kelas[30];
    char nim[30];
    int nilai[10];
    float ratarata, totalNilai = 0;

    //INPUT DATA
    printf("Nama Mahasiswa: ");
    scanf(" %[^\n]", nama); 

    printf("Jurusan: ");
    scanf(" %[^\n]", jurusan);

    printf("Kelas: ");
    scanf(" %[^\n]", kelas);

    printf("NIM: ");
    scanf("%s", nim);

    //LOOPING UNTUK DATA NILAI
    int n = 5; 
    for (int i = 0; i < n; i++) {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }
    
    //LOOPING UNTUK TOTAL NILAI
    for (int i = 0; i < n; i++) {
        totalNilai += nilai[i];
    }
    
    //MENGHITUNG RATA-RATA
    ratarata = totalNilai / n;  

    //OUTPUT
    printf("\n\nOUTPUT\n");
    printf("Nama: %s \n", nama);
    printf("Jurusan: %s \n", jurusan);
    printf("Kelas: %s \n", kelas);
    printf("NIM: %s \n", nim);
    printf("Rata-rata: %.2f \n", ratarata);  

    return 0;
}
