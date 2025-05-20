// Nama File : InsertionSORT.c
// Deskripsi : mengurutkan tabel dengan metode insertion
// Nama : Gege Centiana Putra
// Tanggal : 30 Mei 2024

#include<stdio.h>

void InsertionSORT(int T[],int N){
    //Kamus Lokal
    int i;
    int pass;
    int Temp;

    //Algoritma
    for(pass=1;pass<N;pass++){
        Temp = T[pass];
        i = pass-1;

        while((Temp<T[i])&&(i>1)){
            T[i+1] = T[i];
            i = i - 1;
        }
        if(Temp>=T[i]){
            T[i+1] = Temp;
        }
        else if(Temp<T[i]){
            T[i+1] = T[i];
            T[i] = Temp;
        }
    }
}

int main(){
    //Kamus
    int arr[7] = {7,1,2,5,3,4,6};
    int N;

    // Algoritma
    N = 7;
    printf("Sebelum sorting\n");
    for(int i=0;i<N;i++){
        printf("%d ", arr[i]);
    }

    InsertionSORT(arr,N);

    printf("\nSesudah sorting\n");
    for(int i=0;i<N;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
