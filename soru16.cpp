#include <stdio.h>

int main(){
	
	int t=0;
	
	for(int i=1000;i<=2000;i=i+2){
		
		t=i+t;
		printf("\n%d",i);
	}
	
	
	printf("\nhepsinintoplami--->%d",t);
	
	return 0;
	
}