#include<stdio.h>
#include<windows.h>

int opcion;
int Visa();
//funcion 1
int saldo1;
float dinero1,retiro1,total1,totalsaldo1;
int MasterCard();
//funcion 2
int saldo2;
float dinero2,retiro2,total2,totalsaldo2;

int main(){
do{
	do{
	printf("\n\t\tbienvenido\n");
	system ("pause");
	system("cls");
	
	printf("\tCual es su opcion:\n\n");
	printf("\t1 Visa\n\n");
	printf("\t2 MasterCard\n\n");
	printf("Elegir una opcion: ");
	scanf("%d",&opcion);
	system("cls");
	
	}while(opcion < 0 || opcion > 3);
	
		switch(opcion){
		
		case 1:
		Visa();
		break;
		
		case 2:
		MasterCard();
		break;	
	}
}while(opcion != 3);	
}

int Visa(){
do{
	printf("Que transaccion desea hacer\n");
	printf("1 Agregar Saldo\n");
	printf("2 Retirar Saldo\n");
	printf("3 Ver Saldo Actual\n");
	printf("4 Salir\n");
	printf("Elegir una opcion: ");
	scanf("%d",&saldo1);
	system("cls");
	switch(saldo1){
	
		case 1:
		printf("Cuanto dinero desea ingresar: ");
		scanf("%f",&dinero1);
		if(dinero1 <= 200){
			printf("Usted a depositado %.1f a su cuenta\n",dinero1);
		}else if(dinero1 > 200){
			printf("El valor depositado excede el maximo\n");
		}
		totalsaldo1 += dinero1;
		system("pause");
		system("cls");
		break;
		
		case 2:
		printf("Cuanto dinero desea retirar: ");
		scanf("%f",&retiro1);
		total1 = dinero1 - retiro1;
		printf("Usted a retirado %.1f\n",retiro1);
		printf("En su cuenta queda %.1f\n",total1);
		system("pause");
		system("cls");
		break;
		
		case 3:
		printf("\n\tSaldoIngresado\tSaldoRetirado\tSaldoActual\n");
		printf("\t %.1f\t\t%.1f\t\t%.1f\n",totalsaldo1,retiro1,total1);
		system("pause");
		system("cls");
		break;
		
		case 4:
			printf("Volver al menu principal\n");
			system("pause");
			system("cls");
			break;
	}
}while(saldo1 != 4);	
}

int MasterCard(){
	do{
	printf("Que transaccion desea hacer\n");
	printf("1 Agregar Saldo\n");
	printf("2 Retirar Saldo\n");
	printf("3 Ver Saldo Actual\n");
	printf("4 Salir\n");
	printf("Elegir una opcion: ");
	scanf("%d",&saldo2);
	system("cls");
	switch(saldo2){
	
		case 1:
		printf("Cuanto dinero desea ingresar: ");
		scanf("%f",&dinero2);
		if(dinero2 <= 200){
			printf("Usted a depositado %.1f a su cuenta\n",dinero2);
		}else if(dinero2 > 200){
			printf("El valor depositado excede el maximo\n");
		}
		totalsaldo2 += dinero2;
		system("pause");
		system("cls");
		break;
		
		case 2:
		printf("Cuanto dinero desea retirar: ");
		scanf("%f",&retiro2);
		total2 = dinero2 - retiro2;
		printf("Usted a retirado %.1f\n",retiro2);
		printf("En su cuenta queda %.1f\n",total2);
		system("pause");
		system("cls");
		break;
		
		case 3:
		printf("\n\tSaldoIngresado\tSaldoRetirado\tSaldoActual\n");
		printf("\t %.1f\t\t%.1f\t\t%.1f\n",totalsaldo2,retiro2,total2);
		system("pause");
		system("cls");
		break;
		
		case 4:
			printf("Volver al menu principal\n");
			system("pause");
			system("cls");
			break;
	}
}while(saldo1 != 4);	
}
