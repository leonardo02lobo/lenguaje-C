#include<stdio.h>
#include<windows.h>

float total_l = 0,total; 
int personas,i;

int main(){
	
	printf("Ingresar la cantidad de personas que vinieron hoy: ");
		scanf("%d",&personas);
		
		for(i = 0;i < personas; i++){
			
			printf("Cuantas litros ingresastes: ");
			scanf("%f",&total);
			
			total_l += total;
		}
		printf("el total de litros de las %d personas son de %.1f",personas,total_l);
}
