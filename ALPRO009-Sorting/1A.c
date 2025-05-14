// Nama File : CountSORT.c
// Deskripsi : mengurutkan tabel dengan metode pencacahan
// Nama : Gege Centiana Putra
// Tanggal : 18 Mei 2024

#include<stdio.h>
#include<stdlib.h>

int main(){
    // Kamus
    int N, i, K,ValMax, ValMin,j;
    N = 7;
    int T[7] = {7,1,4,5,3,2,6};
    ValMax = 7;
    ValMin = 1;
    int TabCount[ValMax-ValMin+1];

    // Algoritma
    //Inisialisasi TabCount
    for(i=0;i<ValMax-ValMin+1;i++){
        TabCount[i] = 0;
    }
    // Counting
    for(i=0;i<N;i++){
        TabCount[T[i]]++;
    }
    // Pengisian kembali : T1<T2..<TN
    K = 0;
    for(i=0;i<=ValMax-ValMin+1;i++){
           for(j=0;j<TabCount[i];j++){
                T[K] = i;
                K++;
        }
    }
    for(i=0;i<N;i++){
        printf("%d ",T[i]);
    }
    return 0;
}
