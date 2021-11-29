#include <stdio.h>

int main(){

    int fila;
    int columna = 0;
    int cine[8][8];
    int x, y;
    int n = 0;

    
    for (fila= 0; fila < 8; fila++)
    {
        printf("  %i", fila); 
    }
    printf("\n");
    

    for (x = 0; x < 8; x++)
    {
        n++;
        columna = n -1;

        printf("%d", columna);
        for (y = 0; y < 8; y++)
        {
            cine[x][y] = 11;
            printf("|%d", cine[x][y]);
        }
        printf("\n");
    }
    

    return 0;
}
