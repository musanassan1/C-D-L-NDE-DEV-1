#include <stdio.h>

int main(){
	
	int A=1,B,N;
	
	printf("faktoriyelini istediginiz sayiyi girin");
	scanf("%d",&N);
	
	for(int i=N;i>=1;i=i-1){
		
		A=i*A;
		
		
		
	}
	
	
			printf("\n%d",A);


return 0;
	
	
}