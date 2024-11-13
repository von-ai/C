#include <stdio.h>

int main(){
    float num1, num2, result;
    char operator;

    printf("Pilih Operator +, -, *, /: ");
    operator = getchar();
    printf("Masukkan angka pertama: ");
    scanf("%f", &num1);
    fflush(stdin);
    printf("Masukkan angka kedua: ");
    scanf("%f", &num2);
    
    switch (operator)
    {
    case  '+':
        result = num1 + num2;
        break;
    
    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        if (num2 == 0)
        {
            printf("Hasil tidak terdefinisi");
        } else{
            result = num1 / num2;
        }
        break;    
    default:
        printf("Operator yang dimasukkan salah.");
        break;
    }

    printf("Hasil = %f", result);
    return 0;
}