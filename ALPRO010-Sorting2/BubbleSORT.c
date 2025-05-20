// Nama File : BubbleSort.c
// Deskripsi : mengurutkan tabel dengan metode bubble
// Nama : Gege Centiana Putra
// Tanggal : 30 Mei 2024
#include<stdio.h>

void BubbleSort(int T[], int N)
{
    //Kamus Lokal
    int i,K;
    int pass;
    int Temp;

    //Algoritma
    for(pass=0;pass<N-1;pass++){
        for(K=N-1;K>=pass+1;K--){
            if(T[K]<T[K-1]){
                Temp = T[K];
                T[K] = T[K-1];
                T[K-1] = Temp;
            }
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

    BubbleSort(arr,N);

    printf("\nSesudah sorting\n");
    for(int i=0;i<N;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
