#include<stdio.h>
#include<windows.h>

int alumnos;
float total,total_R;

int main(){
	
	printf("Ingresar el total de alumnos en este nuevo año: ");
	scanf("%d",&alumnos);
	
	if(alumnos < 2000){
		total += alumnos * 45 / 100,
		total_R += alumnos - total;
		printf("El total de alumnos ingresados es de %.1f \n",total);
		printf("El total de alumnos rechazados es de %.1f \n",total_R);
	}
	if(alumnos > 2000){
		printf("Este numero no se puede ingresar por el sistema del colegio.\n");
	}
	system("pause");
	system("cls");
}

