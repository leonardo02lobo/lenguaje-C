#include<stdio.h>
#include<windows.h>
#include<ctype.h>

typedef struct{
	char nombre[30];
}producto;

int main(){

int x,y,z,temp,copia,p=0,w=0;
int longitud = 5;
producto respaldo[1];
producto producto[10];
char patron [53];
char letra;

z=0;
patron[0]='A';patron[1]='a';patron[2]='B';patron[3]='b';patron[4]='C';patron[5]='c';patron[6]='D';patron[7]='d';patron[8]='E';patron[9]='e';
patron[10]='F';patron[11]='f';patron[12]='G';patron[13]='g';patron[14]='H';patron[15]='h';patron[16]='I';patron[17]='i';patron[18]='J';
patron[19]='j';patron[20]='K';patron[21]='k';patron[22]='L';patron[23]='l';patron[24]='M';patron[25]='m';patron[26]='N';patron[27]='n';
//patron[28]='Ñ';Buscar corregir problemas de eñes
//patron[29]='ñ';Buscar corregir problemas de eñes
patron[30]='O';patron[31]='o';patron[32]='P';patron[33]='p';patron[34]='Q';patron[35]='q';patron[36]='R';patron[37]='r';patron[38]='S';
patron[39]='s';patron[40]='T';patron[41]='t';patron[42]='U';patron[43]='u';patron[44]='V';patron[45]='v';patron[46]='W';patron[47]='w';
patron[48]='X';patron[49]='x';patron[50]='Y';patron[51]='y';patron[52]='Z';patron[53]='z';

for(x=0;x<5;x++)
{
	printf("Escribe un producto \n",x+1);
	scanf("%s",producto[x].nombre);
}

for(x=0;x<longitud;x++)
{
 p=0;
 w=0;
 letra=producto[x].nombre[0];
   
   while(patron[p]!=letra)
  {
	p=p+1;
  };

temp=p;
p=0;

for (y=z;y<longitud;y++)
	{
	letra=producto[y].nombre[0];
		while(patron[p]!=letra)
         {
	       p=p+1;
         };
		w=p;
		
	    if(temp>=w)
	    {
	     temp=w;
	     respaldo[0]=producto[y];
	     copia=y;
	    }		
         p=0;
	}
	 producto[copia]=producto[x];
	 producto[x]=respaldo[0];
	z=z+1;
}

printf(" El orden quedo de la siguiente forma\n");

for (y=0;y<longitud;y++)
{	
	printf("%s \n", producto[y].nombre);
}
	
}
