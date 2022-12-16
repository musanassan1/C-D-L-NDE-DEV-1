#include <stdio.h>
#include <math.h>

int main(){
	
	float t=0.0;
	
	
	int n,i;
	
	scanf("%d",&n);
	
	for(i=2;i<=n;i=i+2){
		printf("\n%f",pow(i,-1));
		t=t+pow(i,-1);
	}
	
	
	printf("\nhepsinintoplami--->%f",t);
	
return 0;	
}