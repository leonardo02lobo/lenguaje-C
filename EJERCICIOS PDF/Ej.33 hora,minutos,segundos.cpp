#include<stdio.h>
#include<windows.h>

int opcion,hora;
float total1 = 0,total2 = 0;
int main(){
	
	printf("Ingresar un hora( desde 00 hasta 23)");
	scanf("%d",&hora);
	system("cls");
	
	printf("A que hora desea convertir: \n");
	printf("[1] minutos\n");
	printf("[2] segundos\n");
	scanf("%d",&opcion);
	
	if(opcion == 1){
	total1 += hora *60;
	printf("La hora que coloco fue %d y tiene %.0f minutos. ",hora,total1);	
	}
	if(opcion == 2){
		total2 += hora *3600;
	printf("La hora que coloco fue %d y tiene %.0f segundos. ",hora,total2);	
	}
	
}
