#include<stdio.h>
#include<windows.h>
# define NOTA 100
int nota();

int est,i,j,opcion,opcion_catedra;
float nota1[NOTA],nota2[NOTA],total1,total2,notaF1 = 0,notaF2 = 0;

int main(){
	
	printf("Ingresar la cantidad de estudiantes: ");
		scanf("%d",&est);
	system("cls");
	printf("Que catedra desea averiguar: \n");
	printf("1 matematica I\n");	
	printf("2 introduccion\n");	
	printf("3 computacion\n");	
	printf("4 fisica\n");	
	printf("5 quimica\n");	
	printf("6 programacion\n");	
	printf("7 Adios\n");
	scanf("%d",&opcion_catedra);
	system("cls");
	switch(opcion_catedra){
		
		case 1:
			nota();
			break;
		case 2:
			nota();
			break;
		case 3:
			nota();
			break;
		case 4:
			nota();
			break;
		case 5:
			nota();
			break;
		case 6:
			nota();
			break;
		case 7:
			printf("Hasta luego!!\n");
			break;

	}
}

int nota(){
	
	printf("Cuantos parciales se aplican a la catedra: \n");
	printf("[1] 3 parciales\n");
	printf("[2] 4 parciales\n");
	printf("Que opcion desea: ");
		scanf("%d",&opcion);
		system("cls");
	switch(opcion){
		
		case 1:
	for(i = 0;i < 3; i ++){
		
		printf("Ingrese la nota %d: ",i+1);
		scanf("%f",&nota1[i]);
		total1 += nota1[i];
	}	
	
	if(total1 > 135){
		
	for(int i =0;i < 3; i++){
	printf("USted paso la catedra de %d con el parcial %d: %.1f\n",opcion_catedra,i+1,nota1[i]);	
	}
	
	
	}
	if(total1 < 135){
		total1 -= 135;
		printf("A usted se le quedo la catedra %d con %d",opcion_catedra,total1);
		
	}
			break;

		case 2:
	for(j = 0;j < 4; j ++){
		
		printf("Ingrese la nota %d: ",j+1);
		scanf("%f",&nota2[j]);
		total2 += nota2[j];
	}		
		if(total2 >= 180){
			
	for(int j =0;j < 4; j++){
	printf("USted paso la catedra de %d con el parcial %d: %.1f\n",opcion_catedra,j+1,nota2[j]);	
	}		
	}else if(total2 < 180){
		total2 -= 180;
		printf("A usted se le quedo la catedra %d con %.1f, le falto %.1f\n",opcion_catedra,nota2[j],total2);
		
	}
			break;
	}
	

	
}
