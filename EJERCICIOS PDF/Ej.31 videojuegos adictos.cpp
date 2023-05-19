#include<stdio.h>
#include<windows.h>
#define NOMBRE 999

struct nom{
char nombre[100];	
}nombres;

float total,per;

int main(){
for(int i=0;i<1;i++){
	printf("Ingrese un juego(sin espacio solo utilizar _ )");
		scanf("%s",nombres.nombre);
		
	printf("Ingresar cuantas personas juegan %s: ",nombres.nombre);
		scanf("%f",&per);
		
	total += per * 4 / 100;
	
	printf("El juego %s es adicto por %.2f porciento de personas",nombres.nombre,total);
}	
	
	
}
