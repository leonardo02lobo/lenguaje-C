#include<stdio.h>
#include<windows.h>

int opcion;

int generotrap();
// variables
int opcionGeneroTrap;

int generoreggue();
//variables
int opcionGeneroReggue;

int generopop();
//variables
int opcionGeneroPop;

int generotrapArgentino();
//variables
int opcionGeneroTrapArgentino;

int main(){
do{
	do{
	printf("QUE GENERO DESEA\n");
	printf("1 trap\n");
	printf("2 reggue\n");
	printf("3 pop\n");
	printf("4 trap Argentino\n");
	printf("5 Listado\n");
	printf("6 Salir\n");
	scanf("%d",&opcion);
	system("cls");
	if(opcion < 0 || opcion > 6){
		printf("OPCION: INVALIDA");
	}
	}while(opcion < 0 || opcion > 6);
	
	switch(opcion){
		
		case 1:
		generotrap();
		break;
		
		case 2:
		generoreggue();
		break;

		case 3:
		generopop();
		break;

		case 4:
		generotrapArgentino();
		break;

		case 5:
		printf("\n\tGenero\t\tArtista\t\tAnio_nacimiento\n");
		printf("\tTrap\t\tBizarrap\t\t1998\n");
		printf("\tTrap\t\tDJ Snake\t\t1986\n\n");
		printf("\tReggae\t\tBob Marley\t\t1945\n");
		printf("\tReggae\t\tManu Chao\t\t1961\n\n");
		printf("\tTPop\t\tArianna Grande\t\t1993\n");
		printf("\tPop\t\tLady Gaga\t\t1986\n\n");
		printf("\tTrap_A\t\tYsy A\t\t\t1998\n");
		printf("\tTrap_A\t\tKhea\t\t\t2000\n");

		break;

		case 6:
		printf("Hasta luego !!\n");
		break;
		
	}
	printf("\n");
	system("pause");
	system("cls");
	
}while(opcion != 6);	
	
}

int generotrap(){
	
	printf("Artistas\n");
	printf("1 Bizarrap\n");
	printf("2 DJ snake\n");
	scanf("%d",&opcionGeneroTrap);
	
	if(opcionGeneroTrap == 1){
	printf("\n\tGonzalo Julián Conde mejor conocido artísticamente como Bizarrap es un productor discográfico argentino, nacido el 29 de agosto de 1998 ");
	}
	if(opcionGeneroTrap == 2){
	printf("\n\tWilliam Grigahcine (n. 13 de junio de 1986 en Paris, Francia), mejor conocido como DJ Snake, es un DJ, productor y rapero francés");
	}

}

int generoreggue(){
	
	printf("Artistas\n");
	printf("1 Bob Marley\n");
	printf("2 Manu Chao\n");
	scanf("%d",&opcionGeneroReggue);
	
	if(opcionGeneroReggue == 1){
	printf("Robert Nesta Marley (Nine Miles, Saint Ann Parish, Jamaica, 6 de febrero de 1945 - Miami, 11 de mayo de 1981), mejor conocido como Bob Marley\n");	
	}
	if(opcionGeneroReggue == 2){
	printf("Manu Chao es hijo del periodista Ramón Chao, gallego de Vilalba (Lugo) y de madre vasca de Bilbao. Nacio el 21 Junio 1961\n");
	}
}

int generopop(){
	
	printf("Artistas\n");
	printf("1 Ariana Grande\n");
	printf("2 Lady Gaga\n");
	scanf("%d",&opcionGeneroPop);
	
	if(opcionGeneroPop == 1){
	printf("Ariana Grande Butera (Boca Ratón, 26 de junio de 1993) es una actriz, cantante y compositora estadounidense. \n");	
	}
	if(opcionGeneroPop == 2){
	printf("Stefani Joanne Angelina Germanotta, más conocida por su nombre artístico, Lady Gaga (Manhattan, Nueva York, 28 de marzo de 1986)\n");	
	}
}

int generotrapArgentino(){
	
	printf("Artistas\n");
	printf("1 Ysy A\n");
	printf("2 Khea\n");
	scanf("%d",&opcionGeneroTrapArgentino);
	
	if(opcionGeneroTrapArgentino == 1){
	printf("Alejo Nahuel Acosta (Buenos Aires, Argentina; 12 de julio de 1998), conocido artísticamente como YSY A,1? es un rapero, cantante, compositor\n");	
	}
	if(opcionGeneroTrapArgentino == 2){
	printf("Ivo Alfredo Thomas Serue, más conocido por su nombre artístico Khea, es un cantante de trap argentino. Nacio el 13 Abril 2000\n");	
	}	
}
