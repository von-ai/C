#include <stdio.h>

int main(){
    char kar;
    int jumkar = 0, jumspasi = 0;

    puts("Masukkan sebuah kalimat dan akhiri dengan ENTER. \n");
    puts("Menghitung jumlah karakter ada kalimat tersebut.\n");
    
    while ((kar = getchar ()) != '\n')
    {
        jumkar++;
        if (kar == ' ');
        {
            jumspasi++;
        }

        printf("\nJumlah karakter = %d", jumkar);
        printf("\nJumlah Spasi    = %d", jumspasi);
        
    }
    return 0;
}