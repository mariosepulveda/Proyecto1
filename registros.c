#include "registros.h"

void MostrarRegistro(int registro[],int pos)
{
    int i;

    for(i=0;i<=11;i++)
    {
       printf("\n\tposicion del registro r%d:%d",i,registro[i]);
    }

    printf("\n\tLa posicion %d del registro contiene:%d",pos,registro[pos]);

 return 0;
}
