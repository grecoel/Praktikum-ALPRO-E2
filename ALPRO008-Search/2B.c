// Nama File : BinSearch1.c
// Deskripsi : mencari harga X dalam tabel T terurut secara Binary dengan boolean
// Nama : Gege Centiana Putra
// Tanggal : 15 Mei 2024

#include <stdio.h>
#include <stdbool.h>

void BinSearch1(int T[], int N, int X, bool *Found, int *IX ){
    //Kamus Lokal
    int atas, bawah, tengah;
    //Algoritma
    atas = 0;
    bawah = N - 1;
    *Found = false;
    *IX = 0;

    while (atas <= bawah && !*Found) {
        tengah = (atas + bawah) / 2;
        if (X == T[tengah]) {
            *Found = true;
            *IX = tengah;
        } else if (X < T[tengah]) {
            bawah = tengah - 1;
        } else {
            atas = tengah + 1;
        }
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
    BinSearch1(T, N, X, &Found, &IX);
    if (Found) {
        printf("data berada pada indeks ke %d ", IX);
    } else {
        printf("data tidak ditemukan");
    }

    return 0;
}
