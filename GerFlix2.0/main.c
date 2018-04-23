#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
#include "usuario.h"
#include "usuarioSerie.h"

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
    eUsuarioSerie userSerie[10];
    eUsuario MisUsuarios[3];


    CrearListadoSeries(listaSerie,5);
    CrearListadoUsuariosYSeries(userSerie);
    CrearListadoDeTresUsuarios(MisUsuarios);


    int id_user;
    int id_serie;

    printf("Ariel Eduardo Bri%coli\n",164);

    for (int i=0;i<5;i++)
    {
        printf("\t ID  DE SERIE: %d\n",listaSerie[i].idSerie);
        printf("\t NOMBRE DE LA SERIE: %s\n",listaSerie[i].nombre);
        printf("\t GENERO DE LA SERIE: %s\n\n\n\n",listaSerie[i].genero);
    }

    system("pause");
    system("cls");

    for (int i=0;i< 10;i++)
    {
       id_user = userSerie[i].idUsuario;
       id_serie = userSerie[i].idSerie;

       printf("iduser,idseri %d %d",id_user,id_serie);
       system("pause");

        for(int j=0;j<3;j++)
        {
            if(MisUsuarios[j].idUsuario==id_user)
            {
                printf("\n\t Usuario: %s %d\n",MisUsuarios[j].nombre,id_user);
            }
        }
        for (int k=0;k<5;k++)
        {
            if(listaSerie[k].idSerie==id_serie)
            {
                 printf("\t Serie que ve: %s\n\n\n", listaSerie[k].nombre);
            }
        }
        system("pause");

    }
    return 0;
}




/* 1 - Mostrar c/d usuario con las series que ve
2- Mostrar por c/d serie los usuarios que la ve
3 - mostrar la/s series menos populares
4 - Ingresar usuario y listar sus series
5 - Ingresar serie y listar sus usuarios
6 - top 3 de series */
