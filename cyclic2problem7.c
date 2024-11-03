#include <stdio.h>

int main(){

    int sayi, toplam = 1;

    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi < 0)

        printf("pozzitif bir sayi giriniz.");
        return(1);

    for (int i = 1; i <= sayi; i++){

        toplam *= i;
    }

    printf("faktoriyel degeri: %d", toplam);

return(0);
}