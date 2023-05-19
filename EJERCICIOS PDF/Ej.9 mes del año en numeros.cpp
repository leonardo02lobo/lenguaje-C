#include<stdio.h>
#include<windows.h>

int mes;

int main(){
do{
	printf("Ingresar un mes: ");
	scanf("%d",&mes);
	
	if(mes == 1){
		printf("Estamos en el mes de enero\n");
	}
	if(mes == 2){
		printf("Estamos en el mes de febrero\n");
	}
	if(mes == 3){
		printf("Estamos en el mes de marzo\n");
	}
	if(mes == 4){
		printf("Estamos en el mes de abril\n");
	}
	if(mes == 5){
		printf("Estamos en el mes de mayo\n");
	}
	if(mes == 6){
		printf("Estamos en el mes de junio\n");
	}
	if(mes == 7){
		printf("Estamos en el mes de julio\n");
	}
	if(mes == 8){
		printf("Estamos en el mes de agosto\n");
	}
	if(mes == 9){
		printf("Estamos en el mes de septiembre\n");
	}
	if(mes == 10){
		printf("Estamos en el mes de octubre\n");
	}
	if(mes == 11){
		printf("Estamos en el mes de noviembre\n");
	}
	if(mes == 12){
		printf("Estamos en el mes de diciembre\n");
	}
	if(mes > 13){
		printf("Este mes no existe o no esta registrado\n");
	}
	system("pause");
	system("cls");
}while(mes > 13);
}
