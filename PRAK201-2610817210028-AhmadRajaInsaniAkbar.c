#include <stdio.h> 
int main() {
    char nama[50], nim[50],kelasparalel[50],TTL[100], hobi[50], alamat [50], Nohp[50];
    printf ("Nama                 : "); 
    fgets(nama, 50, stdin); 
    printf ("NIM                  : "); 
    fgets(nim, 50, stdin);
    printf ("Kelas Paralel        : ");
    fgets(kelasparalel, 50, stdin);
    printf ("TTL                  : ");
    fgets(TTL, 100, stdin);
    printf ("Hobi                 : ");
    fgets(hobi, 50, stdin);
    printf ("Alamat               : ");
    fgets(alamat, 50, stdin);
    printf ("No HP                : ");
    fgets(Nohp, 50, stdin);
    printf ("\n"); 
    printf ("Nama                 : %s\n", nama); 
    printf ("NIM                  : %s\n", nim);
    printf ("Kelas Paralel        : %s\n", kelasparalel);
    printf ("TTL                  : %s\n", TTL); 
    printf ("Alamat               : %s\n", alamat);
    printf ("No HP                : %s\n", Nohp);  

}