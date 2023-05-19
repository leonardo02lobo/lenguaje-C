#include<stdio.h>
#include<windows.h>
#define CEDULA 10

int main(){
	
	int arreglo[CEDULA];
	int i,j;
	
	for(i = 0; i < CEDULA; i++){
		printf("Ingresar la cedula: ");
		scanf("%d",&arreglo[i]);
		system("cls");
	}
	for(j = 0; j < CEDULA; j ++){
		printf("La cedula es %d\n",arreglo[j]);
		
	}
	system("pause");
}
