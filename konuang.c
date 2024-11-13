#include <stdio.h>
#include <string.h>

int main(){
    int uang;
    float konver;
    char mata_uang [20];

    printf("Masukkan mata uang: ");
    scanf("%s", &mata_uang);


    if (strcmp(mata_uang, "dollar") == 0)
    {
        printf("Masukkan nilai dalam dollar: ");
        scanf("%d", &uang);
        konver = uang * 15487;
        printf("%.2f", konver);


    } else if (strcmp(mata_uang, "euro") == 0)
    {
        printf("Masukkan nilai dalam euro: ");
        scanf("%d", &uang);
        konver = uang * 16425;
        printf("%.2f", konver);

    } else if (strcmp(mata_uang, "yen") == 0)
    {
        printf("Masukkan nilai dalam yen: ");
        scanf("%d", &uang);
        konver = uang * 104;
        printf("%.2f", konver);
    } else if (strcmp(mata_uang, "riyal") == 0)
    {
        printf("Masukkan nilai dalam riyal: ");
        scanf("%d", &uang);
        konver = uang * 4127;
        printf("%.2f", konver);
    } else
    {
        printf("Yang anda masukkan bukan mata uang atau program belum update");
    }
    
    
    
    
    
    
}