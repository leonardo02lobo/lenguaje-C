#include<stdio.h>
#include<windows.h>

int main(){
	
	float migrantes = 7100000;
	float total = 0,total_f = 0;
	
	total += 7100000 * 84.9 / 100;
	total_f += (7100000 - total);
	
	printf("el total de migrantes es de %.0f\nY el total de personas que quedan en venezuela es de %.0f",total,total_f);
}
