#include <stdio.h>

int main(){
    char nama[10];

    printf("Masukkan nama: ");
    scanf("%[^\n]", nama);
    puts("");
    printf("Happy Birthday %s", nama);
    return 0;
}