#include<stdio.h>

char vocal;

int main(){
	
	printf("Ingresar una vocal: ");
	scanf("%c",&vocal);
	
	switch(vocal){
		
		case 'a':
			printf("Esto es una vocal\n");
			break;
		case 'e':
			printf("Esto es una vocal\n");
			break;
		case 'i':
			printf("Esto es una vocal\n");
			break;
		case 'o':
			printf("Esto es una vocal\n");
			break;
		case 'u':
			printf("Esto es una vocal\n");
			break;
		default:
			printf("Esto es otro termino\n");
			break;
	}
}
