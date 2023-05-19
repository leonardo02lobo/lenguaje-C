#include<stdio.h>
#include<windows.h>

int opcion;

int main(){

do{
	do{
	system("color 70");
	printf("Tablero\n");
	printf("Que color desea: \n");
	printf("1 amarillo\n");
	printf("2 azul\n");
	printf("3 rojo\n");
	printf("4 sorpresa\n");
	printf("5 Salir\n");
	printf("que opcion desea: ");
	scanf("%d",&opcion);
	system("cls");
	if(opcion < 0 || opcion > 5){
		system("color 40");
		printf("EL sistema detecto un ERROR.");
	}	
	}while(opcion < 0 || opcion > 5);
	
	switch(opcion){
		case 1:
			system("color 67");
			printf("Hola");
		printf("\n\n");
		system("pause");
		system("cls");
			break;
		case 2:
			system("color 17");
			printf("Hola");
		printf("\n\n");
		system("pause");
		system("cls");
			break;
		case 3:
			system("color 47");
			printf("Hola");
		printf("\n\n");
		system("pause");
		system("cls");
			break;
		case 4:
		system("color 2");
		for(int i = 0; i < 999 ;i ++){
			printf("000100001011100000110000010101000000001010010101001010000100010101001010011001001101");
		}
		printf("\n\n");
		system("pause");
		system("cls");
		break;	
	}
	
	
}while(opcion != 5);

	
}
