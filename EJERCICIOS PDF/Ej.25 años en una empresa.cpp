#include<stdio.h>
#include<windows.h>

int main(){
	
	int anio, total = 0;
	
	printf("Ingresar el a�o que tiene en la empresa: ");
	scanf("%d",&anio);
	
	total += 60 - anio;
	
	printf("\n\tA usted le falta %d anios para retirarse\n",total);
	
}
