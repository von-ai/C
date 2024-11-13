// #include <stdio.h>

// int main(){
//     char name[15];
//     printf("Masukkan Nama: ");
//     scanf("%s", name);

//     printf("\nHallo, %s. Selamat Belajar String.", name);
//     return 0;
// }

// #include <stdio.h>
// #define MAKS 20

// int main(){
//     int i, jumkar = 0;
//     char teks[MAKS];

//     puts("Program Akan Menghitung Jumlah Karakter");
//     puts("Masukkan Kalimat (MAKS 19 Karakter): ");
//     fgets(teks, sizeof(teks), stdin);
//     for (i = 0; teks[i]; i++)
//     {
//         jumkar++;
//     }

//     printf("Jumlah Karakter: %d", jumkar);
//     return 0;   
// }

// #include <stdio.h>

// void bentuk1(void);
// void bentuk2(void);

// int main(){
//     bentuk1();
//     bentuk2();
// }

// void bentuk1(void){
//     char kompiler_c[]=
//     {'V', 'i', 's', 'u', 'a', 'l', ' ', 'C', '+', '+', '\0'};
//     puts (kompiler_c);
// }

// void bentuk2(void){
//     char kompiler_c[]="Visual C++";
//     printf("%s\n", kompiler_c);
// }

#include <stdio.h>
#include <string.h>
#define MAKS 80

int main(){
    char str1[MAKS];
    char str2[] = "ABCDE";

    strcpy(str1, str2);
    printf("String pertama adalah: %s\n", str1);
    printf("String kedua adalah: %s\n", str2);

    int bnyk = strlen(str1);
    printf("%d\n", bnyk);
    puts(str2);
    puts("");
    strcat(str1, str2);
    return 0;
}