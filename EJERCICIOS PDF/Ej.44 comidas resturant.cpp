#include<stdio.h>
#include<windows.h>
#define COMIDA 100

struct co{
char comidas[50];
float precio[50];	
}comi[COMIDA];

int comida,i,j;

int main(){
	
	printf("Cuantas comida habra en el restaurante: ");
	scanf("%d",&comida);
	
	for(i = 0; i < comida; i ++){
		
		printf("Ingresar la comida [%d]: ",i+1);
		scanf("%s",comi[i].comidas);
		printf("Ingresar el precio de la comida [%d]: ",i+1);
		scanf("%s",comi[i].precio);
	}
	system("pause");
	system("cls");
	
	printf("[][][][][][][][][][][][][][][][][][[]][][]\n");
	printf("[]\t\tCarta\t\t \t[]\n");
	printf("[]\tcomida\t\tprecio\t\t[]\n");
	for(j = 0;j < comida;j++){
	printf("[]\t%d. %s\t\t%s $\t[]\n",j+1,comi[j].comidas,comi[j].precio);	
	}
	printf("[][][][][][][][][][][][][][][][][][[]][][]\n");
}
