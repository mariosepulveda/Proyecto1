#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    int registro[]={1,2,3,4,5,6,7,8,9,0,9,8};
    int pos;

    printf("\n\tIngrese la posicion del registro que desea ver:");
    scanf("%d",&pos);

    MostrarRegistro(registro,pos);

    return 0;
}