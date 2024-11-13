#include <stdio.h>

int main(){
    int m, n;

    printf("Masukkan Nilai N: ");
    scanf("%d", &n);
    fflush(stdin);
    printf("Masukkan Nilai M: ");
    scanf("%d", &m);

    for(n; n<=m; n++)
    {
        printf("%d\n", n);
    }
    return 0;
}