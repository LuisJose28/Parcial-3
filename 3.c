
#include <stdio.h>

void AsientosCine() // esta funcion imprime la distribucion de los asientos del cine
{
    int cine[8][8];
    int x, y;

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

    return;
}



void SillasReservadas() //Funcion que impre las sillas que han sido reservadas
{
    int cine[8][8];
    int x, y;
    int silla1, silla2;
    
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
    return;
}


int main(){

    int cine[8][8];
    int x, y;
    int terminar;

    int b; //esta variable sera el maximo de capacidad para reservar una silla

    printf("\n-Reservacion de Asientos \n");
    AsientosCine();// funciones que imprime la reservacion de asientos

    

    for (b = 0; b < 32; b++)
    {
        SillasReservadas();
    }
    


    return 0; 
}
