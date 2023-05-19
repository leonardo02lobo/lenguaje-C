#include<stdio.h>
#include<windows.h>

int opcion;
float num1 = 0, num2 = 0, num3 = 0, num4 = 0, total = 0;
int operacion1,operacion2,operacion3;

int main(){
do{
	do{
	printf("CALCULADORA\n");
	printf("¿Cuantos numeros desea operar?\n");
	printf("1 dos numeros\n");
	printf("2 tres numeros\n");
	printf("3 cuatro numero\n");
	printf("4 Salir\n");
	printf("que opcion desea: ");
	scanf("%d",&opcion);
	system("cls");
	
	if(opcion < 0 || opcion > 4){
		
		printf("Esta opcion no es valida\n");
		
			}	
			
		}while(opcion < 0 || opcion > 4);
	
		switch(opcion){
			
			case 1:
			printf("Que operacion desea hacer\n");
			printf("1 +\n2 -\n3 *\n4 /\n");
			printf("5 Salir\n");
			printf("Que opcion desea: ");
			scanf("%d",&operacion1);
			system("cls");
			
			if(operacion1 == 1){
				
			printf("Ingrese el primer numero:");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero:");
			scanf("%f",&num2);
			total += num1 + num2;
			printf("El total es %.2f ",total);
			total = 0;
			num1 = 0;
			num2 = 0;	
			}
			if(operacion1 == 2){

			printf("Ingrese el primer numero:");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero:");
			scanf("%f",&num2);
			total += num1 - num2;
			printf("El total es %.2f ",total);
			total = 0;
			num1 = 0;
			num2 = 0;				
			}	
			if(operacion1 == 3){

			printf("Ingrese el primer numero:");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero:");
			scanf("%f",&num2);
			total += num1 * num2;
			printf("El total es %.2f ",total);
			total = 0;
			num1 = 0;
			num2 = 0;				
			}
			if(operacion1 == 4){
					
			printf("Ingrese el primer numero:");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero:");
			scanf("%f",&num2);
			total += num1 / num2;
			printf("El total es %.2f ",total);
			total = 0;
			num1 = 0;
			num2 = 0;				
			}
			if(operacion1 == 5){
				
			printf("menu principal\n");
			system("pause");
			system("cls");	
							
			}
			
			printf("\n");
			system("pause");
			system("cls");
			break;
			
			case 2:
				
			printf("Que operacion desea hacer\n");
			printf("1 +\n2 -\n3 *\n4 /\n");
			printf("5 Salir\n");
			printf("Que opcion desea: ");
			scanf("%d",&operacion2);
			system("cls");
			
			if(operacion2 == 1){
				
			printf("Ingrese el primer numero:");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero:");
			scanf("%f",&num2);
			printf("Ingrese el tercer numero:");
			scanf("%f",&num3);
			total += num1 + num2 + num3;
			printf("El total es %.2f ",total);
			total = 0;
			num1 = 0;
			num2 = 0;
			num3 = 0;	
			}
			if(operacion2 == 2){

			printf("Ingrese el primer numero:");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero:");
			scanf("%f",&num2);
			printf("Ingrese el tercer numero:");
			scanf("%f",&num3);
			total += num1 - num2 - num3;
			printf("El total es %.2f ",total);
			total = 0;
			num1 = 0;
			num2 = 0;
			num3 = 0;				
			}	
			if(operacion2 == 3){

			printf("Ingrese el primer numero:");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero:");
			scanf("%f",&num2);
			printf("Ingrese el tercer numero:");
			scanf("%f",&num3);
			total += num1 * num2 * num3;
			printf("El total es %.2f ",total);
			total = 0;
			num1 = 0;
			num2 = 0;
			num3 = 0;				
			}
			if(operacion2 == 4){
					
			printf("Ingrese el primer numero:");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero:");
			scanf("%f",&num2);
			printf("Ingrese el tercer numero:");
			scanf("%f",&num3);
			total += num1 / num2 / num3;
			printf("El total es %.2f ",total);
			total = 0;
			num1 = 0;
			num2 = 0;
			num3 = 0;				
			}
			if(operacion2 == 5){
				printf("menu principal\n");
				system("pause");
				system("cls");				
			}
			printf("\n");
			system("pause");
			system("cls");
			break;
			
			case 3: 
			
			printf("Que operacion desea hacer\n");
			printf("1 +\n2 -\n3 *\n4 /\n");
			printf("5 Salir\n");
			printf("Que opcion desea: ");
			scanf("%d",&operacion3);
			system("cls");
			
			if(operacion3 == 1){
				
			printf("Ingrese el primer numero:");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero:");
			scanf("%f",&num2);
			printf("Ingrese el tercer numero:");
			scanf("%f",&num3);
			printf("Ingrese el cuarto numero:");
			scanf("%f",&num4);
			total += num1 + num2 + num3 + num4;
			printf("El total es %.2f ",total);
			total = 0;
			num1 = 0;
			num2 = 0;
			num3 = 0;
			num4 = 0;	
			}
			if(operacion3 == 2){

			printf("Ingrese el primer numero:");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero:");
			scanf("%f",&num2);
			printf("Ingrese el tercer numero:");
			scanf("%f",&num3);
			printf("Ingrese el cuarto numero:");
			scanf("%f",&num4);
			total += num1 - num2 - num3 - num4;
			printf("El total es %.2f ",total);
			total = 0;
			num1 = 0;
			num2 = 0;
			num3 = 0;
			num4 = 0;				
			}	
			if(operacion3 == 3){

			printf("Ingrese el primer numero:");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero:");
			scanf("%f",&num2);
			printf("Ingrese el tercer numero:");
			scanf("%f",&num3);
			printf("Ingrese el cuarto numero:");
			scanf("%f",&num4);
			total += num1 * num2 * num3 * num4;
			printf("El total es %.2f ",total);
			total = 0;
			num1 = 0;
			num2 = 0;
			num3 = 0;
			num4 = 0;				
			}
			if(operacion3 == 4){
					
			printf("Ingrese el primer numero:");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero:");
			scanf("%f",&num2);
			printf("Ingrese el tercer numero:");
			scanf("%f",&num3);
			printf("Ingrese el cuarto numero:");
			scanf("%f",&num4);
			total += num1 / num2 / num3 / num4;
			printf("El total es %.2f ",total);
			total = 0;
			num1 = 0;
			num2 = 0;
			num3 = 0;
			num4 = 0;				
			}
			if(operacion3 == 5){
				printf("menu principal\n");
				system("pause");
				system("cls");				
			}
			printf("\n");
			system("pause");
			system("cls");
			break;
			
			case 4:
			printf("menu principal\n");
			break;
		}	

	}while(opcion != 4);	
	
}
