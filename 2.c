/algoritmo para butacas de cine


#include <stdio.h>

int main(){

    int cine[8][8];
    int x, y;
    int silla1, silla2;

    int accion; // esta variable sirve para determinar que hara en el switch-case.
    int terminar;// esta varibale sirve para terminar el programa
    
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






    return 0; 
}
