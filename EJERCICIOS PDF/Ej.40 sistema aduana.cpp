#include<stdio.h>
#include<windows.h>

int edad,dineros,opcion;

int dinero();
int papeles();

int main(){
	
	printf("Ingrese su edad: ");
	scanf("%d",&edad);
	
	if(edad < 20){
		printf("Usted es menor de dad, no puede viajar.");
	}
	if(edad >= 20){
	dinero();
	papeles();
		
	}
	if(edad >= 20 and dineros <= 2000 and opcion == 1){
		printf("Usted es aceptado para viajar!!");
	}else{
		printf("Usted esta retirado.");
	}
	
	printf("\n");
}

int dinero(){
	printf("cuanto dinero lleva: ");
	scanf("%d",&dineros);
	
	if(dineros <= 2000){
		printf("Usted puede viajar!!");
	}
	if(dineros > 2000){
		printf("Usted no puede viajar.");
	}
	printf("\n");
}

int papeles(){
	
	printf("Usted tiene los papeles en regla: \n");
	printf("1 si\n");
	printf("2 no\n");
	scanf("%d",&opcion);
	
	if(opcion == 1){
		printf("usted puede viajar!!");
	}
	if(opcion == 2){
		printf("usted no puede viajar");
	}
	printf("\n");
}
