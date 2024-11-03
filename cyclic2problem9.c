#include <stdio.h>

int main(){

    int n, poz = 0, neg = 0, notr = 0, sayi;

    printf("kac sayi girilecek? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){

        printf("bir sayi giriniz: ");
        scanf("%d", &sayi);
    

        if (sayi > 0)
            poz++;
        else if(sayi == 0)
            notr++;
        else
            neg++;

    }
    
    printf("%d tane pozitif sayi, \n", poz);
    printf("%d tane negatif sayi, \n", neg);
    printf("%d tane notr sayi, \n", notr);

return(0);
}