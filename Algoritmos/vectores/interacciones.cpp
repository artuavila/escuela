#include<stdio.h>
float porcentaje, promedio;
int i, interacciones[12], N=12, total, max, pos, posi, cont;
main()
{
	for(i = 0 ; i < N ; i++)
	{
		printf("Ingrese las interacciones de la hora %d:", i + 1);
		scanf("%d", &interacciones[i]);
		
		total = total + interacciones[i];
		
		if(interacciones[i] > max)
		{
			max = interacciones[i];
			pos = i + 1;
		}
		
		if(interacciones[i] > 200)
		{
			cont = cont + 1;
		}
	}
	
	promedio = total / N ;
	porcentaje = (cont * 100) / N;
	
	printf("\n Hora con mayor cantidad de interacciones= %d", pos);
	printf("\n Total de interacciones en el dia= %d", total);
	printf("\n Porcentaje de mas de 200 interacciones= %f", porcentaje);
	
	for(i = 0 ; i < N ; i++)
	{
		if(interacciones[i] < promedio)
		{
		    posi = i + 1;
		    printf("\n Horas en donde las interacciones fueron menores al promedio= %d", posi);
		}
	}
}
