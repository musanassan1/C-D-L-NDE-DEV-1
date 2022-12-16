#include <stdio.h>

int main(){
	
	int sum=0,K,B;
	printf("dusuk sayi giriniz");
	scanf("%d",&K);
	printf("buyuk sayi giriniz");
	scanf("%d",&B);
	for (int i=K;i<=B;i=i+1){
		
		sum=sum+i;
		
	}
	
	printf("%d", sum);
	
	return 0;
	
	
	
}