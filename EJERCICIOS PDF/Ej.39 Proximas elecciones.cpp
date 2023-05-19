#include<stdio.h>
#include<windows.h>

int elecc,elecc_a,total = 0;

int main(){
	
	printf("Ingresar en que año fueron las ultimas elecciones: ");
	scanf("%d",&elecc);
	
	printf("Ingresar en año actual: ");
	scanf("%d",&elecc_a);
	
	total += elecc + 6;
	
	if(total == elecc_a){
		printf("las elecciones son este año");
	}
	if(total != elecc_a){
		printf("las elecciones son en el año %d",total);	
	}
	
}
