#include<stdio.h>
int i, N = 5, vector[5], buscado,encontrado = 0;
main()
{
	for(i = 0 ; i < N ; i ++)
	{
		printf("Ingrese el dato del vector %d: ", i + 1);
		scanf("%d", &vector[i]);
	}
	
	printf("Ingrese el vector que busca: ");
	scanf("%d", &buscado);
	
	for(i = 0 ; i < N ; i ++)
	{
		if(buscado == vector[i])
		{
			printf("\n El valor se encuentra en el vector %d", i + 1);
			encontrado = 1;
		}
    }
		if(encontrado == 0)
		{
			printf("\n No se encontro el valor");
		}
}
