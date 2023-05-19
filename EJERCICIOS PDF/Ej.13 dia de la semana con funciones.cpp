#include<stdio.h>
#include<windows.h>

int dia;
int dias();

int main(){
do{
	do{
	printf("\n\tDIAS DE LA SEMANA\n\n");
	printf("Ingresar un numero para un dia de la semana(entre 1 y 8): ");
	scanf("%d",&dia);
	
	}while(dia < 0 || dia > 8);

	switch(dia){
		
		case 1:
		dias();
		break;
		case 2:
		dias();
		break;
		case 3:
		dias();
		break;
		case 4:
		dias();
		break;
		case 5:
		dias();
		break;
		case 6:
		dias();
		break;
		case 7:
		dias();
		break;
		case 8:
		printf("Esta opcion no esta disponible");
		break;
	}
}while(dia != 8);
	
}

int dias(){
	
	if(dia == 1){
		printf("Hoy es lunes!!\n");
	}
	if(dia == 2){
		printf("Hoy es martes!!\n");
	}
	if(dia == 3){
		printf("Hoy es miercoles!!\n");
	}
	if(dia == 4){
		printf("Hoy es jueves!!\n");
	}
	if(dia == 5){
		printf("Hoy es viernes!!\n");
	}
	if(dia == 6){
		printf("Hoy es sabado!!\n");
	}
	if(dia == 7){
		printf("Hoy es domingo!!\n");
	}
	if(dia == 8){
		printf("Este numero no esta registrado!\n");
	}
	system("pause");
	system("cls");
}
