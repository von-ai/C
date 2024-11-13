//Kalkulator
#include <stdio.h>

int main(){
    int a, b, calcu;
    char op;
    printf("Masukkan Operand 1: ");
    scanf("%d", &a);

    while ((getchar()) !='\n');
    
    printf("Masukkan Operator (*/+-): ");
    scanf("%c", &op);
    printf("Masukkan Operand 2: ");
    scanf("%d", &b);

    switch (op)
    {
    case '*':
        calcu = a * b;
        printf("Hasil = %d", calcu);
        break;
    case '/':
        calcu = a / b;
        printf("Hasil = %d", calcu);
        break;
    case '+':
        calcu = a + b;
        printf("Hasil = %d", calcu);
        break;
    case '-':
        calcu = a - b;
        printf("Hasil = %d", calcu);
        break;
    default:
        printf("Kesalahan Pada Operator atau Operand");
        break;
    }
    return 0;
}