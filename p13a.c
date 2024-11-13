#include <stdio.h>
#include <string.h>

int main(){
    enum manusia{
        pria, wanita
    };

    enum manusia jns_kelamin;

    jns_kelamin = pria;
    printf("Isi Jenis Kelamin = %d\n", jns_kelamin);

    jns_kelamin = wanita;
    printf("Isi Jenis Kelamin = %d\n", jns_kelamin);
    
    return 0;
}