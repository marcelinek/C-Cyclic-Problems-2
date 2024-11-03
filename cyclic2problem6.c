#include <stdio.h>

int main(){

    int sayi, kopya, tersi = 0;

    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);

    kopya = sayi;

    while (sayi != 0)
    {
        int basamak = sayi % 10;
        tersi = tersi * 10 + basamak;
        sayi /= 10;
    }
    
    if (kopya == tersi)
        printf("girilen sayi palindrom sayidir.");

    else
        printf("girilen sayi palindrom sayi degildir.");

return(0);
}