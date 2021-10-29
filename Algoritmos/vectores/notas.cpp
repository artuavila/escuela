#include<stdio.h>
int j, aux, i, N=5, nota[5], total, cont, men, posi, acum;
float promedio, porcentaje, prom_men;
main()
{
	for(i = 0 ; i < N ; i++)
	{
		printf("Ingrese la nota del alumno %d: ", i + 1);
		scanf("%d", &nota[i]);
		
		total = total + nota[i];
		
		if(nota[i] >= 6)
		{
			cont = cont + 1;
		}
		
		if(nota[i] < 8)
		{
			acum = acum + 1;
			men = nota[i] + men;
		}
	}
	
	promedio = total / N;
	porcentaje = (cont * 100) / N;
	prom_men = men / acum;
	
	printf("\n Promedio= %f", promedio);
	printf("\n Porcentaje de aprobados= %f", porcentaje);
	printf("\n Promedio de notas menores a 8= %f", prom_men);
	
	for(i = 0 ; i < N ; i++)
	{
		if(nota[i] > 8)
		{
			posi = i + 1;
			printf("\n Alumnos con nota mayor a 8: %d", posi);
		}
	}
	
	for(j = 1 ; j < N ; j++)
	{
		for(i = 0 ; i < 4 ; i++)
		{
			if(nota[i] > nota[i + 1])
			{
				aux = nota[i];
				nota[i]= nota[i + 1];
				nota[i + 1]= aux;
			}
		}
	}
	for(i = 0 ; i < N ; i++)
	{
		printf("\n %d", nota[i]);
	}
}
