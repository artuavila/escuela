//Se leen la cantidad de habitantes en 5 provincias.
//Imprimir:
//-Provincia con mayor cantidad de habitantes
//-Porcentaje de provincias con mas de 100 habitantes
//-Sumatoria total 
//-Promedio de habitantes por provincia
#include<stdio.h>
#include<conio.h>
float porcentaje;
int max, sumatoria, cont, i, mayores, habitantes, mas_cien, promedio;
main()
{
	for(i=0; i < 5 ; i++)
	{
		cont = cont + 1;
		printf("Ingrese la cantidad de habitantes de la provinvia N%d=", cont);
		scanf("%d", &habitantes);
		
		sumatoria = sumatoria + habitantes;
		
		if(habitantes > max)
		{
			max = habitantes;
			mas_cien = mas_cien + 1; 		
		}
		
		if(habitantes > 100)
		{
			mayores = mayores + 1;
		}
	}
	
	promedio = sumatoria / cont;
	porcentaje = (mayores * 100) / cont;
	
	printf("\n [NUMERO DE LA PROVINCIA CON MAYOR HABITANTES] = %d", mas_cien);
	printf("\n [PORCENTAJE PROVINCIA MAYORES A 100] = %f", porcentaje);
	printf("\n [SUMATORIA FINAL] = %d", sumatoria);
	printf("\n [PROMEDIO HABITANTES] = %d", promedio);
	
	getch();
}
