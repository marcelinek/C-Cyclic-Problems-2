#include <stdio.h>

int main(){

    int i, sayi;

    printf("sayiyi giriniz: ");
    scanf("%d", &sayi);

    printf("girilen sayinin tam bolenleri: ");

    for (i = 1; i <= sayi; i++){

        if (sayi % i ==0){
            printf("%d,", i);
        }
    }

return(0);
}