#include <stdio.h>

void AsientosCine() 
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

void PreguntarACliente()//Funcion que pregunta al cliente que silla desea
{
    int silla1, silla2;

    printf("\nSeleccione la Fila que desea: ");
    scanf("%i", &silla1);

    printf("\nSeleccione la Columna que desea: ");
    scanf("%i", &silla2);

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

    if (silla1 == 1)
    {
        /* code */
    }
    

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

    SillasReservadas();
    

    for (b = 0; b < 32; b++)
    {
        
        
        SillasReservadas();

    }
    


    return 0; 
}
