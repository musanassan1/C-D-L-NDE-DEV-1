#include <stdio.h>

int main()
{
	int sicaklik;
	
	printf("birsicaklikdegerigiriniz");
	scanf("%d",&sicaklik);
	
	if (sicaklik>0){
		
		printf("sicaklik donma noktasinin ustundedir");
	}
	
	else{
		printf("sicaklik donam noktasinin altindedir");
	}
	
	
	return 0;
	
	
}