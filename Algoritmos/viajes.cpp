//Una agencia de viajes desea procesar los datos de sus ventas en un día. Para ello, se cargan las operaciones realizadas: el destino (1-Nacional/2-Internacional) y la cantidad de pasajeros que viajan. Puede ser que ese día no se hayan realizado operaciones y se pueden realizar un máximo de 10 operaciones diarias. El programa finaliza al ingresar cero como destino.
//Informar:
//1)Total de operaciones realizadas y total de boletos vendidos
//2)Cantidad máxima de pasajeros en una sola operación
//porcentaje de boletos que tuvieron destino nacional
//-El mínimo de boletos vendidos para destinos internacionales
#include<stdio.h>
#include<conio.h>
int cont, viaje, pasajeros, respuesta, max, porc_nac, min, total, contador, final;
float i, porcentaje;
main()
{
    do
    {
    cont = cont + 1;

    printf("Ingrese cantidad de pasajeros:");
    scanf("%d", &pasajeros);

    total = total + pasajeros;


    if(pasajeros > max)
        {
            max = pasajeros;
        }

    printf("Ingrese destino de viaje \n 1 = Nacional \n 2 = Internacional \n 0 = finalizar\n");
    scanf("%d", &viaje);

    if (viaje == 2 && viaje != 0)
    {
        if(pasajeros < min || cont == 1)
            {
                min = pasajeros;
            }
    }


    if(viaje == 1 && viaje != 0)
    {
        porc_nac = porc_nac + 1;
    }

    if ( viaje == 0 )
    {
        contador = contador + 1;
    }

    }while(viaje != 0 && cont < 10);

    porcentaje = (porc_nac * 100) / cont;

    final = cont - contador;

        printf("\n [TOTAL DE OPERACIONES REALIZADAS] = %d \n", final);
        printf("\n [TOTAL DE BOLETOS VENDIDOS] = %d \n", total);
        printf("\n [MAX PERSONAS EN UNA OPERACION] = %d \n", max);
        printf("\n [PORCENTAJE DE BOLETOS DESTINO NACIONAL] = %f \n", porcentaje);
        printf("\n [MIN BOLETOS CON DESTINO INTERNACIONAL] = %d \n", min);

    getch();
}
