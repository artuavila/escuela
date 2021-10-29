#include<conio.h>
#include<stdio.h>
float suma,num_1,num_2;
main()
 {
 	printf("Ingrese el 1er numero:");
 	scanf("%f", &num_1);
 	
 	printf("Ingrese el 2do numero:");
 	scanf("%f", &num_2);
 	
 	suma= num_1 + num_2;
 	
 	printf("La suma es: %f", suma);
 	
 	getch();
 }
