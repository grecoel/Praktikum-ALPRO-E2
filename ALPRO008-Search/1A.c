// Nama File : SEQSearchWithSentinel.c
// Deskripsi : mencari harga X dalam tabel T terurut secara Sequential dengan Sentinel
// Nama : Gege Centiana Putra
// Tanggal : 15 Mei 2024

#include <stdio.h>
#include <stdbool.h>

void SEQSearchWithSentinel(int T[], int N, int X, int *IX ){
    //Kamus Lokal
    int i;
    //Algoritma
    T[N] = X;
    i = 0;
    while(T[i] != X){
        i++;
    }
    if(i<N){
        *IX = i;
    }
    else{
        *IX = 0;
    }

}

int main()
{
    //Kamus lokal
    int N = 10;
    int T[10]= {19,1,28,5,20,15,52,13,16,29};
    int X = 52;
    int IX;


    //Algoritma
    SEQSearchWithSentinel(T,N,X,&IX);
    printf("%d", IX);
    return 0;
}
