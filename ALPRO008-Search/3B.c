// Nama File : BinSearch1.c
// Deskripsi : mencari harga X dalam tabel T terurut secara Binary tanpa boolean
// Nama : Gege Centiana Putra
// Tanggal : 15 Mei 2024

#include <stdio.h>
#include <stdbool.h>

void BinSearch2(int T[], int N, int X, bool *Found, int *IX ){
    //Kamus Lokal
    int atas, bawah, tengah;
    //Algoritma
    atas = 0;
    bawah = N - 1;
    *IX = 0;
    tengah = (atas + bawah) / 2;
    while ((atas <= bawah) && (X!=T[tengah])) {
        if (X < T[tengah]) {
            bawah = tengah - 1;
        }
        else if(X > T[tengah]){
            atas = tengah + 1;
        }
        tengah = (atas + bawah) / 2;
    }
    if(X==T[tengah]){
        *Found = true;
        *IX = tengah;
    }
    else{
        *Found = false;
        *IX = 0;
    }
}

int main() {
    //kamus lokal
    int N = 13;
    int T[13] = {1,4,6,7,10,12,18,21,29,30,41,44,47};
    int X = 8;
    int IX;
    bool Found;

    //Algoritma
    BinSearch2(T, N, X, &Found, &IX);
    if (Found) {
        printf("data berada pada indeks ke %d ", IX);
    } else {
        printf("data tidak ditemukan IX = %d", IX);
    }

    return 0;
}
