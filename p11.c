#include <stdio.h>
#include <string.h>

// struct date
// {
//     int month;
//     int day;
//     int year;
// };

// struct student
// {
//     char nama[30];
//     struct date birthday;
// };

// struct student mhs;

// int main(){
//     strcpy(mhs.nama, "Admiral Zuhdi");
//     mhs.birthday.month = 5;
//     mhs.birthday.day = 21;
//     mhs.birthday.year = 2005;
// }


// #define MAKS 10

// struct date
// {
//     int month;
//     int day;
//     int year;
// };

// struct student
// {
//     char nama[30];
//     struct date birthday;
// };

// struct student data_mhs[MAKS];

// int main(){
//     int i = 0, sudah_benar, jml;
//     char lagi;

//     do
//     {
//         printf("Nama   : ");
//         fgets(data_mhs[i].nama, sizeof data_mhs[i].nama, stdin);
//         printf("Birthday (mm-dd-yyyy): ");
//         scanf("%d, %d, %d",
//             &data_mhs[i].birthday.month,
//             &data_mhs[i].birthday.day,
//             &data_mhs[i].birthday.year);
//         puts("");
//         i++;
//         printf("Lagi [Y/T]? ");
//         do{
//             lagi = getchar();
//             sudah_benar = (lagi == 'Y') || (lagi == 'T') || (lagi == 't') || (lagi == 'y');
//         }while (! sudah_benar);
//         {
//             fflush(stdin);
//             puts("");
//         }
//     } while (lagi == 'Y' || lagi == 'y')
//     {
//         jml=i;
//         printf("Data Siswa");
//         for ( i = 0; i < jml; i++)
//         {
//             /* code */
//         }
//     }
// }


/*struct date
{
    int month;
    int day;
    int year;
};

void cetak_tanggal(struct date);

int main(){
    struct date today;
    printf("Masukkan Tanggal [mm-dd-yyyy]: ");
    scanf("%d-%d-%d", &today.month, &today.day, &today.year);

    cetak_tanggal(today);
}

void cetak_tanggal(struct date now){
    static char *nama_bulan[]= {
        "Wrong Month", "Januari", "Februari", "Maret", "April",
        "Juni", "Juli", "Agustus", ""
    }
}*/

int main(){
    struct info_byte
    {
        unsigned int bit1: 1;
        unsigned int bit2: 1;
        unsigned int bit1: 1;
    };
    
}