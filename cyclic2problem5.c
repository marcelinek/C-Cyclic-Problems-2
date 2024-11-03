#include <stdio.h>

int main(){

    int sayi, tersi = 0;

    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);

    while (sayi > 0){

        int basamak = sayi % 10;
        tersi = tersi * 10 + basamak;
        sayi /= 10;
    }

    printf("sayinin tersi: %d\n", tersi);

return(0);
}