#include <stdio.h> 
int main() {
    float Nilai1, Nilai2;
    printf ("masukkan nilai pertama :");
    scanf ("%f", &Nilai1);
    printf ("masukkan nilai kedua :");
    scanf ("%f", &Nilai2);
    printf ("Hasil dari penjumlahan nilai pertama %.2f dan nilai kedua %.2f adalah %.2f", Nilai1, Nilai2, Nilai1 + Nilai2);
    return 0;
}