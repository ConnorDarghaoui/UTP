#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo[5], cantidad[5], i;
    float precio[5], subtotal[5], total;

    for(i=0; i<5; i++)
    {
        printf("Ingrese el codigo del producto: ");
        scanf("%d", &codigo[i]);
        printf("Ingrese el precio del producto: ");
        scanf("%f", &precio[i]);
        printf("Ingrese la cantidad del producto: ");
        scanf("%d", &cantidad[i]);
        subtotal[i]=precio[i]*cantidad[i];
        total=total+subtotal[i];
    }
    printf("\n\n");
    printf("Codigo\tPrecio\tCantidad\tSubtotal\n");
    for(i=0; i<5; i++)
    {
        printf("%d\t%.2f\t%d\t\t%.2f\n", codigo[i], precio[i], cantidad[i], subtotal[i]);
    }
    printf("\n\n");
    printf("Total: %.2f\n", total);
    return 0;
}
