#include <stdio.h>

int main() {
    int tinggi;

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);

    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
