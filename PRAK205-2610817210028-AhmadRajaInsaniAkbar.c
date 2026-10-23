#include <stdio.h> 
#include <math.h>
int main(){
    int miring,alas,tinggi,keliling,luas;
    printf("tinggi = ");
    scanf("%i",&tinggi);
    printf("miring = ");
    scanf("%i",&miring);
    alas = sqrt((miring*miring) - (tinggi*tinggi));
    keliling = alas + tinggi + miring;
    luas = alas * tinggi / 2;
    printf("alas = %i\n", alas);
    printf("tinggi = %i\n", tinggi);
    printf("keliling = %i\n", keliling);
    printf("luas = %i\n", luas);

    return 0 ;
}