#include<stdio.h>
#include<windows.h>
#define AGUA 999
int per,i,total;
int litro[AGUA];

int main(){
	
	printf("Cuantas personas llegaron hoy: ");
	scanf("%d",&per);
	system("cls");
for(i=0;i<per;i++){
	printf("Cuanto litro se lleno en le botellon %d: ",i+1);
	scanf("%d",&litro[i]);
	total += litro[i];
}
system("pause");
system("cls");
for(int j = 0;j < per; j++){
	printf("El botellon %d fue llenado con %d litros de agua\n",j+1,litro[j]);
}
printf("\n	El total de agua que se uso este dia fue de %d litros",total);	
}
