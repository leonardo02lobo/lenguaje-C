#include<stdio.h>
#include<windows.h>
#define NOTA 10

int nota[4];
int total = 0,totalF = 0;
int i;
int resultado();

int main(){
	
	for(i=0;i<4;i++){
		printf("Ingrese la nota %d: ",i+1);
		scanf("%d",&nota[i]);
		
		total += nota[i];
		totalF += (nota[i]/4);
	}
	resultado();
	
}

int resultado(){
	
	printf(" la nota en total es de: %d\n",total);
	printf(" la nota final es de: %d",totalF);
}
