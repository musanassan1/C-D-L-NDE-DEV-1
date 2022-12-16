#include <stdio.h>

int main(){
	
	int A,B;
	printf("bir A sayisi giriniz");
	scanf("%d",&A);
	for(int i=1;i<=9;i++){
		
		B=i*A;
		
		printf("\n%d",B);
		
	}
	
	return 0;
	
	
}