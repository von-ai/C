#include <stdio.h>

float penjumlahan(float num1,float num2){
    return num1 + num2;
}

float pengurangan(float num1, float num2){
    return num1 - num2;
}

float perkalian(float num1,float num2){
    return num1 * num2;
}

float pembagian(float num1,float num2){
    if (num2 != 0)
    {
        return num1 / num2;
    } else{
        puts("Hasil tidak terdefinisi");
        return 0;
    }
}

int main(){
    int num1, num2;
    float result;
    char operator;
    char again;
    do
    {
        fflush(stdin);
        printf("Pilih Operator +, -, *, /: ");
        operator = getchar();
 
        fflush(stdin);
        
        printf("Masukkan angka pertama: ");
        scanf("%d", &num1);
        
        printf("Masukkan angka kedua: ");
        scanf("%d", &num2);

        switch (operator)
        {
        case '+' :
            result = penjumlahan(num1, num2);
            break;
        
        case '-':
            result = pengurangan(num1, num2);
            break;
        
        case '*':
            result = perkalian(num1, num2);
            break;
        
        case '/':
            result = pembagian(num1, num2);
            break;
        default:
            printf("Operator tidak ditemukan");
            break;
        }

        printf("%f\n", result);
        fflush(stdin);

        puts("Ingin Menghitung Lagi? Y/N: ");
        again = getchar();

        if (again == 'N' || again == 'n')
        {
            break;
        }
                
    } while (again == 'Y' || again == 'y');
    return 0;
}