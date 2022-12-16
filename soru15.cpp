#include <stdio.h>

int main(){
	
	int n;
	
	printf("bir n dogal sayisi girin");
	scanf("%d",&n);
	
	for(int i=n;i>=1;i=i-1){
		
		printf("\n%d",i);
		
	}
	
return 0;	
}