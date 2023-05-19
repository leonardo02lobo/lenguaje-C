#include<stdio.h>
#include<windows.h>
#define ARREGLO 999

struct medicamentos{
	
	char farmacia[100];
	
	
}medi[ARREGLO];

int can,i;
int hora[100];

int main(){
	
	printf("Ingresar cuantos medicamentos: ");
	scanf("%d",&can);
	
	for(i = 0;i < can; i++){
	printf("Ingresar el medicamento: ");	
	scanf("%s",medi[i].farmacia);	
	printf("Ingresar la hora(de 00 a 23): ");
	scanf("%d",&hora[i]);
	}

	printf("\t\tHora\t\tmedicamento\t\t\n");

	for(int i = 0; i < can; i++){
		
	printf("\t\t%d\t\t%s\t\t\n",hora[i],medi[i].farmacia);
		
	}
	
}



