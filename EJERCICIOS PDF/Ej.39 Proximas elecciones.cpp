#include<stdio.h>
#include<windows.h>

int elecc,elecc_a,total = 0;

int main(){
	
	printf("Ingresar en que a�o fueron las ultimas elecciones: ");
	scanf("%d",&elecc);
	
	printf("Ingresar en a�o actual: ");
	scanf("%d",&elecc_a);
	
	total += elecc + 6;
	
	if(total == elecc_a){
		printf("las elecciones son este a�o");
	}
	if(total != elecc_a){
		printf("las elecciones son en el a�o %d",total);	
	}
	
}
