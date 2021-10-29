#include<conio.h>
#include<stdio.h>
float estudiante, precio, pagar;
main()
 {
   printf("Ingrese el precio del boleto:");
   scanf("%f", &precio);
   
   printf("Ingrese: \n 1 si es estudiante de nivel secundario \n 2 si es estudiante de nivel universitario \n 3 si no estudia \n");
   scanf("%f", &estudiante);
   
   if(estudiante == 1)
   {pagar= (precio * 15) / 100 - precio;
   printf("Usted tiene un descuento del 15 porciento, debera pagar: %f", pagar);}
   
   else if(estudiante == 2)
   {pagar = (precio * 8) / 100 - precio;
   printf("Usted tiene un descuento del 8 porciento, debera pagar: %f", pagar);}
   
   else if (estudiante == 3)
   {pagar= precio;
   printf("Usted no tiene ningun descuento, debera pagar: %f", pagar);}
   
   getch();
 }
