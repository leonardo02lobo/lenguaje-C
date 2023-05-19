#include<stdio.h>
#include<windows.h>

//variables de prendas 
int porc = 25, total = 0;
int porc_camisa = 30, total_camisa = 0;
int opcion,prenda_opcion;
int prenda();

int main(){
	system("color f0");
	printf("TIENDA DE ROPA\n");
	printf("Ingresar el dia de la semana:\n");
	printf("1 LUNES\n");
	printf("2 MARTES\n");
	printf("3 MIERCOLES\n");
	printf("4 JUEVES\n");
	printf("5 VIERNES\n");
	printf("6 Salir\n");
	printf("Que opcion desea: ");
	scanf("%d",&opcion);
	system("cls");
	if(opcion < 0 || opcion > 6){
		printf("Este dia no esta registrado\a\n");
		}	
	
	switch(opcion){
		case 1:	
		total += porc;
		total_camisa += porc_camisa;
		prenda();
		break;
			case 2:	
		total += porc + 5;
		total_camisa += porc_camisa + 3;
		prenda();
		break;
			case 3:	
		total += porc + 10;
		total_camisa += porc_camisa + 6;
		prenda();
		break;
			case 4:	
		total += porc + 15;
		total_camisa += porc_camisa + 9;
		prenda();
		break;
			case 5:	
		total += porc + 20;
		total_camisa += porc_camisa + 12;
		prenda();
		break;
	}	
}

int prenda(){
	
float pantalon = 0, camisa = 0;
float total_p = 0, total_c = 0;

system("color 0f");
printf("Que prenda desea llevar.\n");
printf("1 pantalones\n");
printf("2 camisas\n");
scanf("%d",&prenda_opcion);

if(prenda_opcion == 1){
	printf("Ingrese el monto del pantalon: \n");
	scanf("%f",&pantalon);
	total_p  += pantalon * total / 100;
	printf("Usted debe cancelar %.2f $\n",total_p);
	total_p = 0;
}
if(prenda_opcion == 2){
	printf("Ingrese el monto de la camisa: \n");
	scanf("%f",&camisa);
	total_c += camisa * total_camisa / 100;
	printf("Usted debe cancelar %.2f $\n",total_c);
	total_c = 0;
}
system("pause");
system("cls");
	
}






