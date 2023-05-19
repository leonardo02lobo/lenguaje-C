#include<stdio.h>
#include<windows.h>
#define VECTOR 10

int main(){
	int i,j;
	int num[VECTOR];
	for(i=0;i<VECTOR;i++){
		printf("Ingresar un numero: ");
		scanf("%d",&num[i]);
		if(num[i] > 0 && num[i] < 100){
			printf("El valor es correcto\n");
		}else{
			printf("Ingresar otro valor\n");
		}
		system("cls");
	}
	for(j=0;j<VECTOR;j++){
	printf("Los numeros son: %d\n",num[j]);	
	}
	
}
