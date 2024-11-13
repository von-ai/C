#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *gajiburuh;
    int i=1;

    struct buruh
    {
        char namaBuruh[50];
        int totalJam;
        int gajiTotal;
    } buruh;

    gajiburuh = fopen("D121231021_5.dat", "rb");
    if (gajiburuh == NULL)
    {
        printf("File tidak dapat dibuka\n");
        exit(1);
    } 

    printf("%2s. %-15s %-15s %s\n", "No", "Nama Buruh", "Total Jam", "Total Gaji");
    
    while (fread(&buruh, sizeof(buruh), 1, gajiburuh) == 1)
    {
        printf("%2d. %-15s %-15d %d\n", i++, buruh.namaBuruh, buruh.totalJam, buruh.gajiTotal);
    }

    puts("");
    fclose(gajiburuh);
}