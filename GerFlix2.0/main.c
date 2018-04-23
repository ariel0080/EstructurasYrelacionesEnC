#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
/**
*
    1. los datos de la serie que ve cada usuario
    2. por cada serie todos los usuarios que la ven
    3. por cada serie cuantos usuarios la ven
*
*/
int main()
{
    eSerie listaSerie[5];
    CrearListadoSeries(listaSerie,5);
    printf("Ariel Eduardo Bri%coli\n",164);

    for (int i=0;i<5;i++)
    {
        printf("\t ID  DE SERIE: %d\n",listaSerie[i].idSerie);
        printf("\t NOMBRE DE LA SERIE: %s\n",listaSerie[i].nombre);
        printf("\t GENERO DE LA SERIE: %s\n\n\n\n",listaSerie[i].genero);
    }

    return 0;
}
