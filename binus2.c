#include <stdio.h>

int main(){
    int a;
    char s[10];

    printf("Tuliskan sebuah kata: ");
    scanf("%s", &s);
    fflush(stdin);
    printf("Masukkan angka: ");
    scanf("%d", &a);
    fflush(stdin);
    puts("");

    printf("%s\n", s);
    printf("%d", a);
    puts("");

    return 0;
}