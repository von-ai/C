#include <stdio.h>

int main(){
    enum data_hari{senin, selasa, rabu, kamis, jumat, sabtu, minggu};
    static char str[][7] = {"senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"};

    enum data_hari hari_kerja;

    int jam_kerja;
    int total_jam = 0;

    for (hari_kerja = senin; hari_kerja<jumat; hari_kerja++)
    {
        printf("jumlah jam kerja hari ");
        printf("%-6s (jam) : ", str[hari_kerja]);
        scanf("%d", &jam_kerja);
        total_jam = total_jam + jam_kerja;
    }
    printf("\nTotal jam kerja = %d", total_jam);
    return 0;
}