#include<stdio.h>
#include<windows.h>

int num1,num2,total = 0;
int opcion;

int main(){
do{
	do{
	system("cls");
	printf("Ingresa el primer numero:");
	scanf("%d",&num1);
	printf("Ingresa el segundo numero:");
	scanf("%d",&num2);
	printf("Que operacion desea hacer:\n");
	printf("1 +\n2 -\n3 *\n4 /\nque opcion elige:");
	scanf("%d",&opcion);
	system("cls");
	}while(opcion < 0 || opcion > 4);
	
	switch(opcion){
		case 1:
		total += num1 + num2;
		printf("%d\n",total);
		if(total%2 == 0){
			printf("El numero %d es par\n",total);
		}else{
			printf("El numero %d es impar\n",total);
		}
		system("pause");
		break;
		case 2:
		total += num1 - num2;
		printf("%d\n",total);
		if(total%2 == 0){
			printf("El numero %d es par\n",total);
		}else{
			printf("El numero %d es impar\n",total);
		}
		system("pause");
		break;
		case 3:
		total += num1 * num2;
		printf("%d\n",total);
		if(total%2 == 0){
			printf("El numero %d es par\n",total);
		}else{
			printf("El numero %d es impar\n",total);
		}
		system("pause");
		break;
		case 4:
		total += num1 / num2;
		printf("%d\n",total);
		if(total%2 == 0){
			printf("El numero %d es par\n",total);
		}else{
			printf("El numero %d es impar\n",total);
		}
		system("pause");
		break;
		}
	}while(opcion != 5);		
}
