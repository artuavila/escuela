//Se procesan la cantidad de litros de combustible que expende un surtidor en una estación de servicio. Indicar:
//-Total de litros de litros vendidos
//-Carga que más litros tuvo.
//-Promedio.
//-Porcentaje de personas que cargan más de 20 litros.
//Se leen los litros de cada carga y el usuario indica si desea seguir cargando datos.
#include<stdio.h>
#include<conio.h>
float litros, promedio, max, porcentaje, total;
int cont, mayores, respuesta;
main()
{
	do
	{
	cont = cont + 1;
	printf("Ingrese la cantidad de Litros que desea cargar N%d:", cont);
	scanf("%f", &litros);
	
	total = total + litros;
	
	if(litros > max)
	{
		max = litros;
	}	
	
	if(litros > 20)
	{
		mayores = mayores + 1;
	}
	
	printf("Desea seguir cargando datos? \n Si = 1 \n No = 0 \n");
	scanf("%d", &respuesta);
	
	}while(respuesta ==! 0);
	
	promedio = total + cont;
	porcentaje = (mayores * 100) / cont;
	
	printf("\n [TOTAL DE LITROS] = %f",total);
	printf("\n [CARGA MAXIMA] = %f",max);
	printf("\n [PROMEDIO] = %f",promedio);
	printf("\n [PORCENTAJE PERSONAS MAS DE 20 LITROS] = %f",porcentaje);
	
	getch();
}
