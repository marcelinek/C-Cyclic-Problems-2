#include <stdio.h>

int main(){
 
	int sayi, bolen, sonuc=0;
	
	printf("Lutfen Sayiyi Giriniz: ");
	scanf("%d", &sayi);
	printf("Lutfen Boleni Giriniz: ");
	scanf("%d", &bolen);
	
    do{

        sayi = sayi - bolen;
        sonuc +=1;
    }
    while (sayi >= bolen);
    
    printf("sonuc: %d\n", sonuc);
    printf("kalan: %d", sayi);

return(0);
}