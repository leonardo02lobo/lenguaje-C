#include<stdio.h>
#include<windows.h>

int opcion;
float hojas_diario,hojas_mensual,total,total_anual;
int i;

int main(){
	
	do{
		do{
			printf("TIENDA DE HOJAS\n");
			printf("1 Datos diarios y mensuales\n");
			printf("2 Datos anuales\n");
			printf("3 Tabla de Datos\n");
			printf("4 salir\n");
			scanf("%d",&opcion);
			system("cls");
		}while(opcion < 0 || opcion > 4);
		
		switch(opcion){
			case 1:
				printf("Ingresar las toneladas de hojas diarios: ");
				scanf("%f",&hojas_diario);
				system("pause");
				system("cls");
			for(i=0;i<12;i++){
				printf("Ingresar las toneladas de hojas mensual: ");
				scanf("%f",&hojas_mensual);
				total += hojas_mensual;
			}
			system("pause");
			system("cls");
				break;
			case 2: 
				total_anual += total / 100;
				printf("El porcentaje anual de toneladas de hojas es %.2f %\n\n",total_anual);
				system("pause");
				system("cls");	
				break;
			case 3:
				printf("\t\thojas_diarias\t\thojas_mensuales\t\tporcentaje anual\n");
				printf("\t\t%.3f\t\t\t%.3f\t\t\t%.3f\n\n",hojas_diario,total,total_anual);
				system("pause");
				system("cls");	
				break;
			case 4:
				printf("Hasta luego!!\n");
				break;
		}
	}while(opcion != 4);
}
