#include<stdio.h>
#include<windows.h>
#define ARREGLO 100

struct comida{
	
	char nombre[20];
	
}com[ARREGLO];
int total = 0,totalF = 0;
int fecha_u,fecha_e,i;

int main(){
	for(i = 0; i < 1; i++){
	printf("Ingrese el nombre del producto: ");
	scanf("%s",com[i].nombre);
	printf("Ingrese el año que se utilizo: ");
	scanf("%d",&fecha_u);
	printf("Ingrese el año de vencimiento: ");	
	scanf("%d",&fecha_e);
	total += 2023 - fecha_u;
	totalF += (5 - total);
	if(total < 5){
		printf("el/la %s tiene %d de uso, le queda %d para expirarse.",com[i].nombre,total,totalF);
	}
	if(total >= 5){
		printf("el/la %s ya esta vencida/vencido",com[i].nombre);
	}	
	}	
	
}
