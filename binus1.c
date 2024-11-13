#include <stdio.h>

int main(){
    int n, m;
    printf("Masukkan angka N: ");
    scanf("%d", &n);
    printf("\nMasukkan angka M: ");
    scanf("%d", &m);
    puts("");
    
    for(int i = n; i <= m; i++)
    {
        printf("%d\n", i);
    }
}