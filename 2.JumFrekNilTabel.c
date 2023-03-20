/* Nama File : 2.JumFrekNilTabel.c */
/* Deskripsi : Menampilkan nilai elemen tabel T yang kmunculannya lebih dari 1 kali */
/* Pembuat   : Tara Tirzandina (24060122130060)*/
/* Tanggal Pembuatan   : 20 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int JumFrekNilTabel(){

    int *T; /* Pointer ke Integer */
    int i,j; /* Counter */
    int sum; /* Menjumlahkan Element */
    int n; /* Jumlah Element pada Array T */

    sum = 0;
    T = (int*)malloc(n*sizeof(int));

    printf("Masukkan n : ");
    scanf("%d",&n);

    if (n <= 0){
        printf("Masukkan harus positif");
    }
    else {
        for(i=0;i<n;i++){
            scanf("%d",T+i);
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if((T[i] == T[j]) && (i != j)){
                    sum = sum + T[i];
                }
            }
        }
        printf("%d",sum);
        free(T);
    }
    return 0;
}
