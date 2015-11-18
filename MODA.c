#include<stdio.h>
#include<stdlib.h>//programa que te de el promedio y la moda
int calificacion[10];
int promedio=0;
int moda[10];
int i;
int mayor;
int posmayor;
int main()
{
	printf("INSERTE LAS CALIFICACIONES\n"); 
	for(i=0; i<10; i++)
{
	printf("DAME LA CALIFICACION %d:\n",i+1);
	scanf("%d",&calificacion[i]);
	promedio+=calificacion[i];
	printf("\n");
}

	printf("EL PROMEDIO DE LAS CALIFICACIONES ES: %d\n",promedio/10);
	mayor=0;
	for(i=0; i<10; i++)
{
	moda[calificacion[i]-1]++;
}
	for (i=0; i<10; i++)
{
	if(moda[i]>mayor)
{
	mayor=moda[i];
	posmayor=i;
}
}
	printf("LA MODA ES: %d\n",posmayor+1);
	system("PAUSE");
}
