#include<conio.h>
#include<stdio.h>
float horas, tasa, salario;
main()
 {
    printf("Ingrese sus horas trabajadas:");
    scanf("%f", &horas);
    
    printf("Ingrese tasa:");
    scanf("%f", &tasa);
    
    if(horas > 40)
    salario= (40 * tasa) + ((horas - 40) * (tasa * 1,5));
    
    else 
    salario= tasa * horas;
    
    printf("Su salario es de: %f", salario);
    
    getch();
 } 
