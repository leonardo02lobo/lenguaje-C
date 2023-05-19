#include<stdio.h>
#include<windows.h>

int opcion,opcionCambio1, opcionCambio2, opcionCambio3;
float cambio1, cambio2, cambio3, cambio4, cambio5, cambio6;
float monto1, monto2, monto3, monto4, monto5, monto6;
float total1, total2, total3, total4, total5, total6;

int main(){
	
	do{
		do{
			printf("/// BANCO ///\n");
			printf("1 bolivares\n");
			printf("2 Pesos CO\n");
			printf("3 Dolares\n");
			printf("4 SALIR\n");
				scanf("%d",&opcion),
				system("cls");
				if(opcion < 0 || opcion > 4){
					
					printf("este dato no es valido\n");
					system("pause");
					system("cls");
				}
			
		}while(opcion < 0 || opcion > 4);
		
		switch(opcion){
			
			case 1:
		do{		
				do{
			printf("/// A QUE MONEDA DESEA PASAR ///\n");
			printf("1 Pesos CO\n");
			printf("2 Dolares\n");
			printf("3 Menu pricipal\n");
				scanf("%d",&opcionCambio1),
				system("cls");
				if(opcionCambio1 < 0 || opcionCambio1 > 3){
					
					printf("este dato no es valido\n");
					system("pause");
					system("cls");
				}
			
		}while(opcionCambio1 < 0 || opcionCambio1 > 3);
			
			switch(opcionCambio1){
				
				case 1:
					
					printf("ingrese la taza de cambio del dia:");
						scanf("%f",&cambio1);
					
					printf("cuanto desea convertir:");
						scanf("%f",&monto1);
						
				total1 += monto1 * cambio1;
				
				printf("El total es de: %.2f\n",total1);
				system("pause");
				system("cls");
				break;
				
				case 2:
					
						printf("ingrese la taza de cambio del dia:");
						scanf("%f",&cambio2);
					
					printf("cuanto desea convertir:");
						scanf("%f",&monto2);
						
				total2 += monto2 * cambio2;
				
				printf("El total es de: %.2f\n",total2);
				system("pause");
				system("cls");
				break;
				
				case 3: 
				
				printf("Menu principal!!\n");
				system("pause");
				break;		
			}
		
	}while(opcionCambio1 != 3);
	
	printf("\n");
		system("cls");
			break;
			
			case 2:
		do{
				do{
			printf("/// A QUE MONEDA DESEA PASAR ///\n");
			printf("1 Bolivares\n");
			printf("2 Dolares\n");
			printf("3 Menu pricipal\n");
				scanf("%d",&opcionCambio2),
				system("cls");
				if(opcionCambio2 < 0 || opcionCambio2 > 3){
					
					printf("este dato no es valido\n");
					system("pause");
					system("cls");
				}
			
		}while(opcionCambio2 < 0 || opcionCambio2 > 3);
			
			switch(opcionCambio2){
				
				case 1:
					
					printf("ingrese la taza de cambio del dia:");
						scanf("%f",&cambio3);
					
					printf("cuanto desea convertir:");
						scanf("%f",&monto3);
						
				total3 += monto3 / cambio3;
				
				printf("El total es de: %.2f\n",total3);
				system("pause");
				system("cls");
				break;
				
				case 2:
					
						printf("ingrese la taza de cambio del dia:");
						scanf("%f",&cambio4);
					
					printf("cuanto desea convertir:");
						scanf("%f",&monto4);
						
				total4 += monto4 * cambio4;
				
				printf("El total es de: %.2f\n",total4);
				system("pause");
				system("cls");
				break;
				
				case 3: 
				
				printf("Menu principal!!\n");
				system("pause");
				break;
				
			}
	}while(opcionCambio2 != 3);
	
	printf("\n");
		system("cls");
			break;
			
			case 3:
		
		do{		
		do{
			printf("/// A QUE MONEDA DESEA PASAR ///\n");
			printf("1 Bolivares\n");
			printf("2 Peso CO\n");
			printf("3 Menu pricipal\n");
				scanf("%d",&opcionCambio3),
				system("cls");
				if(opcionCambio3 < 0 || opcionCambio3 > 3){
					
					printf("este dato no es valido\n");
					system("pause");
					system("cls");
				}
			
		}while(opcionCambio3 < 0 || opcionCambio3 > 3);
			
			switch(opcionCambio3){
				
				case 1:
					
					printf("ingrese la taza de cambio del dia:");
						scanf("%f",&cambio5);
					
					printf("cuanto desea convertir:");
						scanf("%f",&monto5);
						
				total5 += monto5 * cambio5;
				
				printf("El total es de: %.2f\n",total5);
				system("pause");
				system("cls");
				break;
				
				case 2:
					
						printf("ingrese la taza de cambio del dia:");
						scanf("%f",&cambio4);
					
					printf("cuanto desea convertir:");
						scanf("%f",&monto4);
						
				total4 += monto4 * cambio4;
				
				printf("El total es de: %.2f\n",total4);
				system("pause");
				system("cls");
				break;
				
				case 3: 
				
				printf("Menu principal!!\n");
				system("pause");
				break;		
			
		}
	}while(opcionCambio3 != 3);
	
	printf("\n");
		system("cls");
			break;
}
		
	}while(opcion != 4);
	
	
}
