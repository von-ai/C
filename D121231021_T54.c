#include <stdio.h>

int main(){
    char kalimat[] = {'P', 'O', 'L', 'I', 'T', 'E', 'K', 'N', 'I', 'K'};
    char *huruf;

    huruf = &kalimat[2];
    printf("%c\n", *huruf);
    return 0;
}