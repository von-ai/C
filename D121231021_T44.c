#include <stdio.h>
#include <string.h>

int main(){
    char kalimat[100];

    printf("Masukkan Sebuah Kalimat: ");
    gets(kalimat);

    for (int i = 0; kalimat[i]; i++)
    {
        if (kalimat[i] == ' ')
        {
            kalimat[i] = '\n';
        }
    }
    printf("%s", kalimat);
    return 0;
}