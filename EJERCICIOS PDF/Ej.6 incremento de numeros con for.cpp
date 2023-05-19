#include<stdio.h>
#include<windows.h>

int main(){
	
	int num;
	
	printf("Cuantos numeros desea incrementar: \n");
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		printf("%d\n",i);
	}
}
