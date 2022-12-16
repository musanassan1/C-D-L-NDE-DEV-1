#include <stdio.h>

int main(){
	
	int K,B,sayi=0,i;
	
	printf("kucuk sayi giriniz ardindan buyuk sayi giriniz");
	scanf("%d%d",&K,&B);
	printf("bolunecek sayiyi giriniz");
	scanf("%d",&sayi);
	for (int i=K;i<=B;i=i+1){
	
	if(sayi%i==0){
	
	printf("\n%d",i);

	}
	
	
	}
	return 0;
}