#include <stdio.h>

const int MAX = 10;

int main(){
    int var[] ={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *ptr;

    ptr = var;
    for (int i = 0; i < MAX; i++)
    {
        printf("Alamat dari dari var[%d] = %x\n", i, ptr);
        printf("Nilai dari var[%d] = %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}