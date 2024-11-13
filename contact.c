#include <stdio.h>
#include <string.h>

#define MAKS_KONTAK 100

struct Contact
{
    char nama[50];
    char nomor[20];
};

struct Contact contacts[MAKS_KONTAK];
int totalKontak = 0;

void addKontak(){
    if (totalKontak < MAKS_KONTAK)
    {
        fflush(stdin);
        struct Contact newContact;
        printf("Masukkan Nama Kontak: ");
        scanf("%[^\n]", newContact.nama);

        fflush(stdin);
        printf("Masukkan Nomor Kontak: ");
        scanf("%[^\n]", newContact.nomor);

        contacts[totalKontak++] = newContact;
    } else{
        puts("Kontak Telah Penuh.\n");
    }   
}

void displayKontak(){
    puts("/n/nKONTAK ANDA");
    for (int i = 0; i < totalKontak; i++)
    {
        printf("%s : %s\n", contacts[i].nama, contacts[i].nomor);
    }
}

void searchKontak(char searchName[]){
    int found = 0;
    for (int i = 0; i < totalKontak; i++)
    {
        if (strcmp(contacts[i].nama, searchName) == 0)
        {
            printf("Kontak ditemukan: ");
            printf("%s | %s", contacts[i].nama, contacts[i].nomor);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Kontak tidak ditemukan");
    }
}

int main(){
    int pilihan;
    char choice;
    char searchName[50];

    do
    {
        printf("\tMENU\n");
        puts("1. Buat Kontak Baru");
        puts("2. Tampilkan Kontak");
        puts("3. Cari Kontak");
        puts("4. Keluar");
        printf("Pilihan Anda: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            addKontak();
            break;
        
        case 2:
            displayKontak();
            break;
        
        case 3:
            printf("Masukkan Nama Kontak: ");
            gets(searchName);
            searchKontak(searchName);
            break;
        
        case 4:
            puts("Terima Kasih");
        default:
            break;
        }
    } while (pilihan != 4);
    return 0;
}