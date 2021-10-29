//Se desea realizar un programa que lea notas y dni, informar promedio de notas, porcentaje de aprobados, promedio entre los que desaprobaron, nota minima.
//Se pueden leer 0 o mas notas
#include<stdio.h>
#include<conio.h>
float promedio, porcentaje, prom_desap;
int nota, dni, aprob, desap, cont, total, cont_desap, min, respuesta;
main()
{
do
{
cont = cont + 1;
printf("Ingrese su nota:");
scanf("%d", &nota);	

total = nota + total;

if(nota >= 6)
{
aprob = aprob + 1;	
}

else if(nota <= 5)
{
cont_desap = cont_desap + 1;	
desap = desap + nota;	
}

if(nota < min || cont == 1)
{
	min = nota;
}

printf("Ingrese su DNI:");
scanf("%d", &dni);	

printf("Ingrese 0 si desea terminar \n Ingrese 1 para continuar \n");
scanf("%d", &respuesta);	
}while(respuesta != 0);

promedio = total / cont;
porcentaje = (aprob * 100) / cont;
prom_desap = desap / cont_desap;

printf("[PROMEDIO DE NOTAS] = %f \n", promedio);
printf("[PORCENTAJE APROBADOS] = %f \n", porcentaje);
printf("[PROMEDIO DESAPROBADOS] = %f \n", prom_desap);
printf("[NOTA MINIMA] = %d \n", min);
	
getch();
}
