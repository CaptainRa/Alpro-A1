/* Nama File    		: 5_JumPrima.c */
/* Deskripsi    		: Menampilkan jumlah bilangan prima hingga N */
/* Pembuat      		: Tara Tirzandina - 24060122130060 */
/*Tanggal Pembuatan		: 27 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main (){
    JumlahPrima (10);
    return 0;
    }

void JumlahPrima (int x){
    //Kamus Lokal
    int count, i, j;
    int jum = 0;
    if (x<=0){
        printf ("Tidak ada bilangan prima sehingga Sn = 0");
    }
    else {
        for (i=1;i<=x;i++){
            count = 0;
            for (j=1;j<=x;j++){
                if (i%j == 0){
                    count = count + 1;
                }
            }
            if (count == 2)
            {
                jum = jum + i;
                printf ("%d", jum);
            }  
        }
    }
    return jum;
}