#include <stdio.h>

int main(){
    char nama[101], nim[11];
    int age;

    printf("Masukkan Nama: ");
    scanf("%[^\n]", nama);
    fflush(stdin);
    printf("Masukkan NIM: ");
    scanf("%[^\n]", nim);
    fflush(stdin);
    printf("Masukkan Umur: ");
    scanf("%d", &age);

    printf("Nama: %s\n", nama);
    printf("NIM: %s\n", nim);
    printf("Umur: %d\n", age);
    return 0;
}