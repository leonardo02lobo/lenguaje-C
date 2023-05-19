#include<stdio.h>
#include<windows.h>

int opcion;
int suma();
int resta();
int multiplicacion();
int division();
float a = 0,b = 0,total = 0;

int main(){
do{
	do{
	printf("\n\n\tCalculadora Con Funciones\n");
	system("pause");
	system("cls");
	printf("Que operacion desea realizar\n");
	printf("1 suma\n");
	printf("2 resta\n");
	printf("3 multiplicacion\n");
	printf("4 division\n");
	printf("5 salir\n");
	printf("que opcion desea elegir: ");
	scanf("%d",&opcion);
	system("cls");
	}while(opcion < 0 || opcion > 6);
	
	switch(opcion){
		
		case 1:
		suma();
		system("pause");
		system("cls");
		break;
		
		case 2:
		suma();
		system("pause");
		system("cls");
		break;
		
		case 3:
		suma();
		system("pause");
		system("cls");
		break;
		
		case 4:
		suma();
		system("pause");
		system("cls");
		break;
		
		case 5:
		printf("Hasta luego");
		system("pause");
		system("cls");
		break;
	}
}while(opcion != 6);
	
}
int suma(){
	printf("Ingresa el primer numero: ");
	scanf("%f",&a);
	system("cls");
	printf("Ingresa el segundo numero: ");
	scanf("%f",&b);
	system("cls");
	total += a + b;
	printf("La suma de %.0f y %.0f es: %.1f",a,b,total);
}
int resta(){
	printf("Ingresa el primer numero: ");
	scanf("%f",&a);
	system("cls");
	printf("Ingresa el segundo numero: ");
	scanf("%f",&b);
	system("cls");
	total += a - b;
	printf("La suma de %.0f y %.0f es: %.1f",a,b,total);
}
int multiplicacion(){
	printf("Ingresa el primer numero: ");
	scanf("%f",&a);
	system("cls");
	printf("Ingresa el segundo numero: ");
	scanf("%f",&b);
	system("cls");
	total += a * b;
	printf("La suma de %.0f y %.0f es: %.1f",a,b,total);
}
int division(){
	printf("Ingresa el primer numero: ");
	scanf("%f",&a);
	system("cls");
	printf("Ingresa el segundo numero: ");
	scanf("%f",&b);
	system("cls");
	total += a / b;
	printf("La suma de %.0f y %.0f es: %.1f",a,b,total);
}
