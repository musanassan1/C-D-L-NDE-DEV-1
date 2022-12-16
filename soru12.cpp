#include <stdio.h>

int main(){
	
	int dusuk,yuksek,sayac=0;
	
	printf("bir dusuk bir yuksek sayi giriniz");
	scanf("%d %d",&dusuk,&yuksek);
	
	for(int i=dusuk;i<=yuksek;i=i+1){
		
		sayac=sayac+1;
		printf("\n%d", i);
		
		
	}
	printf("\nadimsayisi--->%d", sayac);
}