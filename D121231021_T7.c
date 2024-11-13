#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *input_file = fopen("result11.dat", "w");
    char buffer[100];

    if (input_file == NULL) {
        printf("File tidak dapat dibuka!");
        exit(1);
    }

    printf("Masukkan Sebuah Kalimat: ");
    scanf(" %[^\n]", buffer);

    fputs(buffer, input_file);

    printf("%s\n", buffer);

    fclose(input_file);

    return 0;
}