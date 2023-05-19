#include<stdio.h>
#include<windows.h>
#include<math.h>

float a,b,totala,totalb,total,totalc;
int opcion;

int main(){
	
	printf("Ingrese el primer numero: ");
	scanf("%f",&a);
	printf("Ingrese el segundo numero: ");
	scanf("%f",&b);
	system("cls");
	
	printf("CALCUlADORA\n");
	printf("1 Raices\n");
	printf("2 exponenciaciones\n");
	printf("que opcion desea: ");
	scanf("%d",&opcion);
	
	switch(opcion){
		
		case 1:
		totala += sqrt(a);
			printf("La raiz de %.1f es: %.1f\n",a,totala);
		totalb += sqrt(b);
			printf("La raiz de %.1f es: %.1f\n",b,totalb);
			break;
			
		case 2: 
		total += pow(a,b);
			printf("La exponenciacion de %.1f es: %.1f\n",a,total);
		totalc += pow(b,a);
			printf("La exponenciacion de %.1f es: %.1f\n",b,totalc);
			break;
		
	}
	
}
