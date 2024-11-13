#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *input_file = fopen("result1.dat", "r");
    char buffer[100];

    if (input_file == NULL)
    {
        printf("File tidak dapat diciptakan!");
        exit(1);
    }
    fflush(stdin);
    printf("Masukkan Sebuah Kalimat: ");
    scanf("%[^\n]", buffer);
    fflush(stdin);

    while (fputs(buffer, sizeof buffer, "result.dat") != NULL)
    {
        printf("%s\n", buffer);
    }

    fclose(input_file);

    return 0;
}