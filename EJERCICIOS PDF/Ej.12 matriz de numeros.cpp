#include<stdio.h>
#include<windows.h>
#include<time.h>

void escribir(int matriz[][3]);
void leer(int matriz[][3]);

int main(){
	
	int matriz[3][3];
	
	escribir( matriz);
	leer( matriz);
	system("pause");
	return 0;
	
}

void escribir(int matriz[][3]){
	int i,j;
	srand(time(NULL));
	
for(i = 0; i < 3; i++){

for(j = 0; j < 3; j++){

	matriz[i][j] = rand() % 10;
}
}

	
}

void leer(int matriz[][3]){
	
	int i,j;
	
	for(i = 0;i < 3; i++){
		for(j = 0;j < 3; j++){
		printf("\t%d ",matriz[i][j]);
	}
	printf("\n");
	}
}
