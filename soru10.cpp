#include <stdio.h>

int main(){
	
	int A,B,C;
	
	printf("lutfen 3 tane sayi giriniz");
	scanf("%d%d%d",&A,&B,&C);
	
	if (B<A&&C<A){
		
		printf("enbuyuk---->%d", A);
		
	
		}
	
	
	if(A<B&&C<B){
	
		
		printf("enbuyuk---->%d", B);
	}
	
	if(A<C&&B<C){
		
		printf("enbuyuk----->%d", C);
	}
	
	
	return 0;
}