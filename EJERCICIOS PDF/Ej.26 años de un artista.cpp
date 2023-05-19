#include<stdio.h>
#include<windows.h>
#define ciudad 1

struct artista{
	
	char nombre[100];
	
}nombres[ciudad];

int total,i;
int anio;
int anio_actual;

int main(){
for(i = 0; i < ciudad; i++){
	printf("Ingresar el nombre del artista: ");
	scanf("%s",nombres[i].nombre);
	
}	
	printf("Ingresar el anio de su inicio: ");
	scanf("%d",&anio);

	printf("Ingresar el anio de su culminacion/ o anio actual: ");
	scanf("%d",&anio_actual);	
	
	total += anio_actual - anio;
	
	printf("EL tiempo transcurrido del artista es/fue de %d \n",total);
	
	
}
