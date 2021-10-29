//Una agencia de viajes desea procesar los datos de sus ventas en un día. Para ello, se cargan las operaciones realizadas: 
//el destino (1-Nacional/2-Internacional) y la cantidad de pasajeros que viajan. 
//Puede ser que ese día no se hayan realizado operaciones y se pueden realizar un máximo de 10 operaciones diarias. 
//El programa finaliza al ingresar cero como destino.
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

    //ACA sumamos la cantidad de pasajeros para tener el TOTAL de boletos vendidos como pide el ejercicio
    total = total + pasajeros;


    //Se pone aca pasajeros, porque el ejercicio pide MAXIMO GENERAL de pasajeros. NO maximo de pasajeros con destino nacional.
    if(pasajeros > max)
        {
            max = pasajeros;
        }


    //La pregunta del destino, va al final. Para que el while lo lea y salga del ciclo en caso de que sea 0.

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
        //Aca tenes la cantidad de veces que eligieron destino nacional. Para luego sacar el porcentaje.
        porc_nac = porc_nac + 1;
    }

    if ( viaje == 0 )
    {
        contador = contador + 1;
    }

//¿Por que cont < 10? Porque el ejercicio pide que sea un maximo de 10
    }while(viaje != 0 && cont < 10);

    porcentaje = (porc_nac * 100) / cont;


//¿Por que hacemos esto? Porque sino te cuenta la operacion donde ingresas 0 como respuesta FINAL.
    final = cont - contador;

        printf("\n [TOTAL DE OPERACIONES REALIZADAS] = %d \n", final);
        printf("\n [TOTAL DE BOLETOS VENDIDOS] = %d \n", total);
        printf("\n [MAX PERSONAS EN UNA OPERACION] = %d \n", max);
        printf("\n [PORCENTAJE DE BOLETOS DESTINO NACIONAL] = %f \n", porcentaje);
        printf("\n [MIN BOLETOS CON DESTINO INTERNACIONAL] = %d \n", min);

    getch();
}
