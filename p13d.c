#include <stdio.h>

/*int main()
{
    int angka1, angka2, max;

    printf("masukkan angka 1: ");
    scanf("%d", &angka1);
    printf("masukkan angka 2: ");
    scanf("%d", &angka2);
    
    max = (angka1 > angka2) ? angka1 : angka2;
    printf("Nilai yang lebih besar : %d", max);
    return 0;
}*/


void main() {

   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );

}