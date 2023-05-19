#include<stdio.h>
#include<windows.h>

int prendas();
int comparacion();
int utilidad();
int promedio();

int opcion,opcion_sexo;
int camisas[10],pantalones[10],alumnos,total_c = 0,total_p = 0;
float total_Kc = 0,total_Kp = 0,total_Klc = 0,total_Klp = 0;
int mayor_c = 0,mayor_p = 0,hombres = 0,mujeres = 0;
int i;

int main(){
do{
	do{
	printf("LAVANDERIA UNET\n");
	printf("1 Ingreso de prendas\n");
	printf("2 Numero Mayor de camisas y pantalones\n");
	printf("3 Uso de la lavanderia\n");
	printf("4 Total de Ropa(en Gramo y Kilogramo)\n");
	printf("5 Salir\n");
		scanf("%d",&opcion);
		system("cls");
		if(opcion < 0 ||opcion > 5){
				printf("ERROR:OPCION INVALIDA");
		}	
	}while(opcion < 0 ||opcion > 5);
	
	switch(opcion){
		
		case 1:
			prendas();
			break;
			
		case 2:
			comparacion();
			break;
			
		case 3:
			utilidad();
			break;
			
		case 4:
			promedio();
			break;
			
		case 5:
			printf("Hasta luego!!");
			break;
		}
	
	}while(opcion != 5);		
}

int prendas(){
	printf("Cuantos estudiantes depositaron ropa?(un maximo de 10 alumnos por dia): ");
		scanf("%d",&alumnos);	
		system("cls");
		
for(i = 0; i < alumnos; i++){
	printf("Ingresar el sexo: \n");
	printf("1 Hombre\n");
	printf("2 Mujer\n");
	scanf("%d",&opcion_sexo);
	
	if(opcion_sexo == 1){
		hombres += 1;
	printf("---\n");
	printf("%d\n",hombres);
	printf("---\n");
	}
	if(opcion_sexo == 2){
		mujeres += 1;
	printf("---\n");
	printf("%d\n",mujeres);
	printf("---\n");
	}
	
	printf("\nIngrese la cantidad de camisas que trajo: ");
		scanf("%d",&camisas[i]);
	total_c +=camisas[i];
	printf("Ingrese la cantidad de pantalones que trajo: ");
		scanf("%d",&pantalones[i]);
	total_p +=pantalones[i];
	system("cls");
}
	printf("\n\nLos estudiantes han ingresado un total de: \n");
	printf(" %d Camisas\n",total_c);
	printf(" %d Pantalones\n\n",total_p);
	
	system("pause");
	system("cls");
}

int comparacion(){
		
	for(int i = 0; i < camisas[i]; i++){
		if(camisas[i] > mayor_c){
			mayor_c = camisas[i];
		}
	}
	printf("El numero mayor de camisas es de: %d\n",mayor_c);
	
	for(int i = 0; i < pantalones[i]; i++){
		if(pantalones[i] > mayor_p){
			mayor_p = pantalones[i];
		}
	}
	printf("El numero mayor de camisas es de: %d\n",mayor_p);
	system("pause");
	system("cls");
}

int utilidad(){
	
	if(hombres < mujeres){
		printf("el total de hombres es %d \n",hombres);
		printf("el total de mujeres es %d \n",mujeres);
		printf("La lavanderia fue menos utilizada por los hombres.\n ");
		
	}
		if(hombres > mujeres){
		printf("el total de hombres es %d \n",hombres);
		printf("el total de mujeres es %d \n",mujeres);
		printf("La lavanderia fue menos utilizada por los mujeres.\n ");
		
	}
	system("pause");
	system("cls");
}

int promedio(){
	
	total_Kc += (total_c * 450);
	total_Kp += (total_p * 650);
	total_Klc += total_Kc *0.001;
	total_Klp += total_Kp *0.001;

	
	for(int i = 0; i < 1; i++ ){
		printf("El total de camisas es de %.0f gramos = %.1f Kilogramos.\n",total_Kc,total_Klc);
		printf("El total de pantalones es de %.0f gramos = %.1f Kilogramos.\n",total_Kp,total_Klp);
	
	}	
	system("pause");
	system("cls");
}
