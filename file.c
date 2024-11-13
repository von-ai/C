#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct File
{
    char nama[50];
    char nim[15];
    int nilai;
};

int main(){
    FILE *nilai_mhs;
    
    nilai_mhs = fopen("Nilai.dat", "w");

    if (nilai_mhs == NULL)
    {
        printf("File tak bisa dibuka");
        exit(1);
    }

    printf("Program Ini akan membaca ")
    
    do
    {
        
    } while (/* condition */);
    
}