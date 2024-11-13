#include <stdio.h>
#include <conio.h>

int main(){
    int n;
    float sum, a, ave;
    
    printf("Masukkan angka: ");
    scanf("%d", &n);
    for (int i = 0; i < n ; i++)
    {
        printf("\nInput");
        scanf("%f", &a);
        sum+=a;
    }
    
    
    ave = sum / n;
    printf("\nRata-rata keseluruhan = %f", ave);
    getch();
}