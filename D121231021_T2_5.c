#include <stdio.h>

int main() {
    char letter;
    int sum, valid_flag;

    printf("Masukkan Huruf A/X/Z: ");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'X':
        sum = 0;
        printf("Variabel SUM = %d", sum);
        break;
    case 'Z':
        valid_flag = 1;
        printf("Variable valid_flag = %d", valid_flag);
        break;
    case 'A':
        sum = 1;
        printf("Variabel SUM = %d", sum);
        break;
    default:
        printf("Unknown letter --> %c\n", letter);
        break;
    }
    return 0;
}
