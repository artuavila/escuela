#include <stdio.h>
#include<conio.h>
float edad, guia, cont, acum, porcen_guia, cont_guia, cont_noguia, prom_noguia, min, min_nog, max;
main ()
 {    printf ("\n Ingrese su edad: ");
	scanf ("%f", &edad);
	while (edad != 0 && cont < 10)
   {
   	 cont = cont + 1;
   	 acum = acum + edad;
   	 if (cont <= 10)
   	 {
   		 printf ("\n Si la visita se realiza con guia turistico ingrese 1, sino ingrese 0 \n");
			 scanf ("%f", &guia);
			 if (guia == 1)
			 {
				 cont_guia = cont_guia + 1;
   		      porcen_guia = cont_guia * 100 / cont;
   		 }
   		 else if (guia == 0)
   		 {
   			 cont_noguia = cont_noguia + 1;
   			 prom_noguia = acum / cont;    
   			 if (cont == 1|| edad < min_nog)
   			 {
   				 min_nog = edad;
   			 }
   		 }
   		 if (cont == 1|| edad < min)
   			 {
   				 min = edad;
   			 }
   		 if (cont == 1 || edad > max)
   			 {
   				 max = edad;
   			 }
   		 
   	 }    
    printf ("\n Edad: ");
	scanf ("%f", &edad);
    
    }
    printf ("\n El porcentaje de visitas con guia es de %f", porcen_guia);
    printf ("\n El promedio de edad entre los visitantes sin guia es de %f", prom_noguia);
    printf ("\n La edad minima que asistio sin guia es %f", min_nog);
    printf ("\n La edad minima que visito el panoramico es de %f", min);
    printf ("\n La edad maxima que visito el panoramico es de %f", max);
}




