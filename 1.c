#include <stdio.h>

int main(){

    int cine[8][8];
    int x, y; // fila y columnas

    int accion; // esta variable sirve para determinar que hara en el switch-case.
    int terminar;// esta varibale sirve para terminar el programa

    int silla1, silla2;

    
    printf("\n* Bienvenidos al Cine AnkerField. Disfrute su Noche *\n\n");
    do
    {
        printf("Seleccione que desea hacer: ");
        printf("\n-Ingrese 1 para ver la sala de cine disponible. \n-Ingrese 2 para hacer una reservacion. \n-Ingrese 3 para Limpiar. \n-Ingrese 4 para Terminar. \n");
        printf("\n-Operacion a realizar: ");
        scanf("%i", &accion);


        switch (accion) //usaremos esta condicional multiple para escoger la operacion a realizar
        {
        case 1:
            printf("\n-Sala de cine disponible \n");
            printf("\n-Para esta noche tendremos esta sala disponible:  \n");


            for (x = 0; x < 8; x++)
            {
                for (y = 0; y < 8; y++)
                {
                cine[x][y] = 11;
                }
            }
            for (x = 0; x < 8; x++)
            {
                for (y = 0; y < 8; y++)
                {
                    printf("|%d", cine[x][y]);
                }
                printf("\n");
            }
            
            printf("\n");

            

        
        case 2: 
            printf("\n-Reservacion de Asientos \n");

            for (x = 0; x < 8; x++)
            {
                for (y = 0; y < 8; y++)
                {
                cine[x][y] = 11;
                }
            }
            for (x = 0; x < 8; x++)
            {
                for (y = 0; y < 8; y++)
                {
                    printf("|%d", cine[x][y]);
                }
                printf("\n");
            }

            printf("\nSeleccione la Fila que desea: ");
            scanf("%i", &silla1);

            printf("\nSeleccione la Columna que desea: ");
            scanf("%i", &silla2);

            for (x = 0; x < 8; x++)
            {
                for (y = 0; y < 8; y++)
                {
                    cine[silla1][silla2] = 88;
                }
            }
            for (x = 0; x < 8; x++)
            {
                for (y = 0; y < 8; y++)
                {
                    printf("|%d", cine[x][y]);
                }
                printf("\n");

            }
            break;

        case 3: 
            printf("\n-Usted ha seleccionado la Resta: \n");
            break;
         
        case 4: 
            printf("\n-Usted ha seleccionado la Division: \n");
            break;
        
        default:
            printf("-No ha digitado un numero correcto, por favor vuelva a intentarlo");
            break;
        }
        
        printf("\n\n-¿Desea realizar otra reservacion?. Presione 1 para Si o 0 para No : ");
        scanf("%i", &terminar); //esta linea servira para terminar o repetir el programa. 0 para no. 1 para Si.

    } while (terminar != 0);
    printf("Gracias por visirtanos. Hasta la proxima\n");
    





    return 0; 
}
