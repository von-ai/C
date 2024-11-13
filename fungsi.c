// #include <stdio.h>

// int max(int x, int y);

// int main(){
//     int a, b, besar;
//     printf("Masukkan nilai X: ");
//     scanf("%d", &a);
//     printf("Masukkan Nilai Y: ");
//     scanf("%d", &b);

//     besar = max(a, b);
//     printf("Angka Lebih Besar: %d", besar);
//     return 0;
// }

// int max(int x, int y){
//     if (x > y)
//     {
//         return (x);
//     } else {
//         return (y);
//     }
// }

#include <stdio.h>

int faktorial(int);

int main(){
    int a; 
    puts("FAKTORIAL BILANGAN");
    printf("Masukkan Angka: ");
    scanf("%d", &a);
    printf("Faktorial dari %d adalah %d\n", a, faktorial(a));
    return 0;
}

int faktorial(int m){
    if (m == 1)
    {
        return (1);
    } else {
        return(m * faktorial (m - 1));
    }
    
}