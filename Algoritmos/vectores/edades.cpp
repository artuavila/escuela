#include<stdio.h>
int i, vector[5], N=5, total, mayor, max, posicion, posi;
float promedio, porcentaje;
main()
{
	for(i = 0 ; i < N ; i++)
	{
		printf("Ingrese la edad de la persona N%d: ", i + 1);
		scanf("%d", &vector[i]);
		
		total = total + vector[i];
		
		if(vector[i] >= 18)
		{
			mayor = mayor + 1;
		}
		
		if(vector[i] > max)
		{
			max = vector [i];
			posicion = i + 1;
		}
	}
	promedio = total / N;
	porcentaje = (mayor * 100) / N;
	
	printf("\n Promedio de edades= %f", promedio);
	printf("\n Porcentaje mayores de edad= %f", porcentaje);
	printf("\n Edad maxima= %d", max);
	printf("\n Posicion de memoria donde se encuentra= %d", posicion);
	
	for(i = 0 ; i < N ; i++)
	{
		if(vector[i] < promedio)
		{
			posi = i + 1;
			printf("\n Edades menores al promedio= %d", posi);
		}
	}
}
