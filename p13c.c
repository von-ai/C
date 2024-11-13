#include <stdio.h>

typedef unsigned char BYTE;
BYTE beri_nilai_awal(void);

void main(){
    BYTE kode;
    kode = beri_nilai_awal();
    printf("isi kode = %c\n", kode);
}

BYTE beri_nilai_awal(void){
    return(143);
}
