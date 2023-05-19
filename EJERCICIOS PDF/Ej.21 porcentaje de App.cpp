#include<stdio.h>
#include<windows.h>

float total_f,total_i,total_t;

int main(){
	
	total_f += 7000000 * 20 / 100;
	total_i += 7000000 * 50 / 100;
	total_t += 7000000 * 15 / 100;
	
	printf("\t\tADICCION A LAS REDES SOCIALES\n\n");
	printf("\tfacebook\t\tInstagram\t\tTwitter\n");
	printf("\t%.0f\t\t\t%.0f\t\t\t%.0f\n",total_f,total_i,total_t);
	
}

