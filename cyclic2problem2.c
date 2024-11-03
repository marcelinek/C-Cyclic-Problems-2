#include <stdio.h>

int main(){

    int i, a, b, sonuc =1;
    printf("Lutfen A Sayisini Giriniz: ");
    scanf("%d", &a);

    printf("Lutfen B Sayisini Giriniz: ");
    scanf("%d", &b);

    for (i = 0; i < b; i++){

        sonuc *= a;
    }

    printf("Sonuc: %d", sonuc);

    
return(0);
}