#include<stdio.h>
#include<windows.h>
#define MATERIALES 5

struct material{
	
	char mater[100];
	int precio[100];
	
}materia[MATERIALES];

int i,j,k;

int main(){
	
	for(i=0;i<MATERIALES;i++){
		printf("Ingresar los materiales: ");
		scanf("%s",materia[i].mater);
	}
	system("pause");
	system("cls");
	
	for(k =0;k<MATERIALES;k++){
		printf("Ingrese el precio de %s: ",materia[j].mater);
		scanf("%s",materia[k].precio);
	}
	system("pause");
	system("cls");
	
	printf("\n\t\tProducto\t\tPrecio\n");
	for(j=0;j<MATERIALES;j++){
		printf("\t\t%s\t\t\t%s $\n",materia[j].mater,materia[j].precio);
	}
}
