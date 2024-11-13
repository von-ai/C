#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float d, x1, x2, imaginer;
    printf("Masukkan Nilai A, B, C: \n");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if(d >= 0)
        if (d == 0)
        {
            x1 = -b / (2 * a);
            printf("Dua akar real kembar yaitu X1 = X2 = %f \n",x1 );
        }
        else 
        {
            x1 = (-b + sqrt (d) / (2 * a));
            x2 = (-b - sqrt (d) / (2 * a));
            printf("Akar-akar real berlainan yaitu: \n");
            printf("X1 = %f \n", x1);
            printf("X2 = %f", x2);
        }
    else
    {
        imaginer = (sqrt (-d) / (2 * a));
        x1 = (-b) / (2 * a);
        printf("Akar berlainan imaginer: \n");
        printf("X1 = %f + %f\n", x1, imaginer);
        printf("X2 = %f - %f", x1, imaginer);
    }
    return 0;
}