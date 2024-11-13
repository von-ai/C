#include <stdio.h>

int main(){
    //Selalu ingat untk deklarasi tipe data
    //NIM
    char NIM [20];
    printf("Masukkan NIM Anda: ");
    scanf("%s", NIM);
    getchar();
    //NAMA
    char nama[100];
    printf("Masukkan Nama Anda: ");
    scanf("%[^\n]", nama);
    getchar();
    //Gender
    char gender;
    printf("Masukkan Gender Anda: ");
    scanf("%c", &gender);
    getchar();
    //IPK
    float ipk;
    printf("Masukkan IPK Anda: ");
    scanf("%f", &ipk);
    getchar();

    printf("\n");
    printf("\n");
    //output
    printf("NIM: %s\n", NIM);
    printf("Nama: %s\n", nama);
    printf("Gender: %c\n", gender);
    printf("IPK Anda: %.2f\n", ipk);
    return 0;
}