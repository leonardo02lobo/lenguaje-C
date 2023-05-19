#include<stdio.h>
#include<windows.h>

int opcion;
int consulta();
int salario();
// funcion consulta
int trabajadores;
float total_trabajadores;
//funcion salario
int opcion_salario;
 int salario_total = 0;

int main(){
	
	do{
		do{
			printf("EMPRESA\n");
			printf("1. Consultas\n");
			printf("2. Salario\n");
			printf("3. salir\n");
			printf("Cual opcion dese consultar:");
			scanf("%d",&opcion);
			system("cls");
			if(opcion < 0 || opcion > 3){
			printf("\n\tError: Dato invalido\n");
			system("pause");
			system("cls");
			}
		}while(opcion < 0 || opcion > 3);
		
		switch(opcion){
			
			case 1:
				consulta();
				break;
			case 2:
				salario();
				break;
			case 3:
				printf("\n\tHasta luego!!\n");
				break;
		}
	}while(opcion != 3);	
}
int consulta(){
	
	printf("Cuantos empleados estan trabajando en la empresa: ");
	scanf("%d",&trabajadores);
	printf("\n");
	total_trabajadores += trabajadores * 75/100;
	printf("El total de personas que van a trabajar todo los dias es de %.0f\n",total_trabajadores);
	system("pause");
	system("cls");
}
int salario(){
	
	printf("Que empleado eres:\n");
	printf("1 trabajador Promedio\n");
	printf("2 Empresario\n");
	printf("3 Gerencia\n");
	printf("4 Jefe\n");
	printf("=");
	scanf("%d",&opcion_salario);
	system("cls");
	
	if(opcion_salario == 1){
		printf("Usted esta ganando 700$ \n");
		system("pause");
		system("cls");
	}
	if(opcion_salario == 2){
		printf("Usted esta ganando 1200$ \n");
		system("pause");
		system("cls");
	}
	if(opcion_salario == 3){
		printf("Usted esta ganando 3000$ \n");
		system("pause");
		system("cls");
	}
	if(opcion_salario == 4){
		printf("Usted esta ganando 4500$ \n");
		system("pause");
		system("cls");
	}
}
