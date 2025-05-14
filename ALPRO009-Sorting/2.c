// Nama File : MAXSORT.c
// Deskripsi : mengurutkan tabel dengan metode selection
// Nama : Gege Centiana Putra
// Tanggal : 18 Mei 2024

#include<stdio.h>
#include<stdlib.h>

int main(){
    //Kamus
    int N, i, pass, Temp, IMax;
    N = 7;
    int T[7] = {7,1,4,5,3,2,6};

    //Algoritma
    for(pass=0;pass<N-1;pass++){
        IMax = pass;
        for(i=pass+1;i<N;i++){
            if(T[IMax]<T[i]){
                IMax = i;
            }
        }
        Temp = T[IMax];
        T[IMax] = T[pass];
        T[pass] = Temp;
    }
    for(i=0;i<N;i++){
        printf("%d ",T[i]);
    }
    return 0;
}
