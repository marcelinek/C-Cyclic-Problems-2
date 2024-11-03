#include <stdio.h>

int main(){

    int sayi;

    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi <= 0){
        printf("negatif sayilar 1 ve 0'a bolunemez.");
        return(0);
    }
    
    for (int i = 2; i <= sayi/2; i++){
        if (sayi % i == 0){

            printf("%d sayisi asal degildir.", sayi);
            return(0);
        }
    }

    printf("%d sayisi asaldir.", sayi);

    return(0);
}