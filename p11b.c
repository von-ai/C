#include <stdio.h>

// int main(){
//     char *pkota = "Semarang";

//     printf("String yang ditunjuk oleh pkota = ");
//     puts(pkota); 
//     return 0;
// }

int main(){
    char c = 'Q';
    char *char_pointer = &c;

    printf("%c %c\n", c, *char_pointer);
    c = '/';
    printf("%c %c\n", c, *char_pointer);
    *char_pointer = '(';
    printf("%c %c\n", c, *char_pointer);
    return 0;
}