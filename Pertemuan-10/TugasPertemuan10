//Nama : Tara Tirzandina
//NIM : 24060122130060
//Nama Program : TugasPertemuan10.c
//Definisi : Mengurutkan array T {19 1 28 5 6 10 11 3 7 20} secara descending menggunakan selection sort

#include <stdio.h>
#include <stdlib.h>

//SUB PPROGRAM TUKAR
void tukar(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//SUB PROGRAM SELECTION SORT
void SelectSort(int arr[], int n){
    int i,j,max;
    for (i=0; i<n-1;i++){
        max = i;
        for (j=i+1; j<n; j++){
            if (arr[max]<arr[j]){
                max = j;
            }
        }
        tukar(&arr[max], &arr[i]);
    }
}

//MAIN PROGRAM
int main (){
    int i;
    int n;
    int arr[10] = {19, 1, 28, 5, 6, 10, 11, 3, 7, 20};
    n = sizeof(arr)/sizeof(arr[0]);

    printf ("Array : ");
    for (i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    printf ("\nSetelah di Sorting : ");
    SelectSort(arr, n);
    for (i=0; i<n ; i++){
        printf("%d ",
        arr[i]);
    }

return 0;
}
