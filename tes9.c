#include <stdio.h>
#include <string.h>

int main(){
    char username[] = "zuhdiadm";
    char password[] = "zuhdi21";
    char userin[20];
    char passin[8];

    puts("LOGIN (Hanya 3x Percobaan)");

    for (int i = 3; i > 0; i--)
    {
        printf("Masukkan Username Anda: ");
        gets(userin);
        printf("Masukkan Password Anda: ");
        gets(passin);

        if (strcmp(userin, username) == 0 && strcmp(passin, password) == 0)
        {
            printf("Anda berhasil Login\n");
            break;
        } else {
            printf("Username atau password salah. Sisa percobaan: %d\n", i - 1);
        }
    }
    return 0;
}