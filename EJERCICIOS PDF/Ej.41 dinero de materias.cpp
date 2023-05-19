#include<stdio.h>
#include<windows.h>

int opcion;
int total1 = 0,total2 = 0,total3 = 0,total4 = 0,total5 = 0,total6 = 0,totalF = 0;
int materia1 = 4,materia2 = 5,materia3 = 8,materia4 = 2,materia5 = 4,materia6 = 10;

int main(){
do{
	do{
	printf("Que materia desea: \n");
	printf("[1] matematica 4 $\n[2] fisica 5 $\n[3] quimica 8 $\n[4] historia 2 $\n[5] educacion fisica 4 $\n[6] castellano 10 $\n[7] Ingreso a la semana\n[8] Salir\n");
	scanf("%d",&opcion);
	system("cls");
	}while(opcion < 0 || opcion > 8);
	
	switch(opcion){
		
		case 1:
			total1 += materia1;
		break;
		case 2:
			total2 += materia2;
		break;
		case 3:
			total3 += materia3;
		break;
		case 4:
			total4 += materia4;
		break;
		case 5:
			total5 += materia5;
		break;
		case 6:
			total6 += materia6;
		break;
		case 7:
			totalF += total1 + total2 + total3 + total4 + total5 + total6;
			printf("Usted esta pagando un  total de %d dolares\n",totalF);
			total1 = 0,total2 = 0,total3 = 0,total4 = 0,total5 = 0,total6 = 0;
			system("pause");
			system("cls");		
			break;
		
	}	
}while(opcion != 8);	
	
	

}
