#include <stdio.h>
#include <stdlib.h>

int main(){
    struct buruh
    {
        char namaBuruh[50];
        int totalJam;
        int gajiTotal;
    } buruh;
    FILE *gajiburuh;
    int i = 1;
    gajiburuh = fopen("coba.txt", "r");
    if (gajiburuh == NULL)
    {
        printf("File tidak dibuka");
        exit(1);
    }
    
    printf("%2s. %-15s %-15s %-15s", "No", "Nama Buruh", "Total Jam", "Total Gaji");

    while (fread(&buruh, sizeof(buruh), 1, gajiburuh))
    {
        printf("%2s. %-15s %-15s %-15s", i++, buruh.namaBuruh, buruh.totalJam, buruh.gajiTotal);
    }

    puts("");
    fclose(gajiburuh);
}