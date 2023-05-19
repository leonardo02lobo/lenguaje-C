#include<stdio.h>
#include<windows.h>
#include<math.h>

float num,total;

int main(){
	
	printf("Cual numero desea convrtir: ");
	scanf("%f",&num);
	
	
	total += sin(num);
	printf("EL valor del seno es %.1f\n",total);
	total = 0;
	total += cos(num);	
	printf("EL valor del coseno es %.1f\n",total);
	total = 0;
	total += tan(num);
	printf("EL valor de la tangente es %.1f\n",total);
	total = 0;
	total += 1/sin(num);
	printf("EL valor del secante es %.1f\n",total);
	total = 0;
	total += 1/cos(num);
	printf("EL valor del cosecante es %.1f\n",total);
	total = 0;
	total += 1/tan(num);
	printf("EL valor del cotangente es %.1f\n",total);


}
