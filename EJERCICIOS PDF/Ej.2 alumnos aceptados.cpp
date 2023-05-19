#include<stdio.h>
#include<windows.h>

int alumnos;
float total = 0;
int calculo();

int main(){
	printf("Cuantos alumnos hay \n");
		scanf("%d",&alumnos);
	calculo();	
}

int calculo(){
	
	total+=alumnos*25/100;
	printf("El total de alumnos que van a pasar al siguiente curso es: %.2f\n",total);
	system("pause");
}
