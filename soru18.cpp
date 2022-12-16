#include <stdio.h>

int main(){
	int n,a,B,c,D,e,F,g,H;
	printf("0 ile 15 arasinda bir sayi giriniz");
	scanf("%d",&n);
	
	if (n%2==0){
	
	
	a=0;
	B=n/2;
	//printf("a-------->%d", a);
	
	//printf("%d",b);
	
	}
	else{
	
	
	a=1;
    //printf("a-------->%d", a);
	B=n/2;
	//printf("b----------->%d",b);
	
	}
	
	if(B%2==0){
		c=0;
		D=B/2;
	    //printf("c---------->%d",c);
	}
	else{
		c=1;
		//printf("c---------->%d",c);
		D=B/2;
	}
	
		if (D%2==0){
	
	
	e=0;
	F=D/2;
	
  //printf("e-------->%d", e);
	
	}
	else{
	
	
	e=1;
    //printf("e-------->%d", e);
	F=D/2;
	
	
	}
	
//	if(F%2==0){
//		g=0;
//		H=F/2;
//	printf("g---------->%d",g);
//	}
//	else{
//		g=1;
//		printf("g---------->%d",g);
//		H=F/2;
//	}

    
	
	
	printf("binaryformatta--->%d%d%d%d",F,e,c,a);
	
	
			

	
	return 0;
	
	
	
}