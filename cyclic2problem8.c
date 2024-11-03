#include <stdio.h>

int main(){

    int n, a1 = 0, a2 = 1, tmp = 1;
    
    printf("bir sayi giriniz: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){

        printf("%d ", a1);
        tmp = a1 + a2;
        a1 = a2;
        a2 = tmp;
    }

return(0);
}