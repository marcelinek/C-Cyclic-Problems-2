#include <stdio.h>

int main(){

    int sayi, basamak;

    printf("bir sayi giriniz : ");
    scanf("%d", &sayi);

    printf("basamaklar : ");
    
    do{
        basamak = sayi % 10 ;
        printf(" %d ", basamak);
        sayi /= 10;
    } while (sayi > 0);

    return 0;
}