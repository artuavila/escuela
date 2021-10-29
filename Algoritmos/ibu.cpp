#include<conio.h>
#include<stdio.h>
float peso, edad, unidades;
main()
 {
 	printf("Ingrese su edad:");
 	scanf("%f", &edad);
 	
 	printf("Ingrese su peso:");
 	scanf("%f", &peso);
 	
 	if(edad >= 18)
 	unidades= (peso / 10 ) * 2;
 	
 	else 
	unidades= (peso / 7) * 0,5;
 	
 	printf("Se le suministraran %f ibuprofenos", unidades);
 	
 	getch();
  } 
