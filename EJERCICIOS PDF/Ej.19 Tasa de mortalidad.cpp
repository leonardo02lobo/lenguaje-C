#include<stdio.h>
#include<windows.h>

int nacimiento();
int mortalidad();
int tabla();

int opcion;
float ninos = 0,total = 0;

int main(){
do{
	do{
	printf("TASA DE MORTALIDAD Y NACIMIENTO\n");
	printf("1 Tasa de nacimiento\n");
	printf("2 Tasa de mortalida\n");
	printf("3 Tabla de mortalidad y nacimiento\n");
	printf("4 Salir\n");
	printf("Que opcion desea: ");
	scanf("%d",&opcion);	
		system("cls");	
	}while(opcion < 0 || opcion > 4);
	
	switch(opcion){
		
		case 1:
			nacimiento();
			break;
		case 2:
			mortalidad();
			break;
		case 3:
			tabla();
			break;
		case 4:
			printf("\n\thasta luego\n");
			break;
	}
	system("pause");
	system("cls");
	
}while(opcion != 4);

}

int nacimiento(){
	
	printf("Ingresar la cantidad de niños anuales: ");
	scanf("%f",&ninos);
	system("cls");
	printf("La taza de nacimientos anuales es de: %.3f \n\n",ninos);
	
}

int mortalidad(){


total += ninos * 21 / 100;
printf("La taza de mortalidad es de %.1f de ninos anuales\n\n",total);


}

int tabla(){
	
	printf("\n\t\tInd_Nacimiento\t\tInd_mortalidad\n");
	printf("\n\t\t%.3f\t\t\t%.1f\n\n",ninos,total);
	
}
