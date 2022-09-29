#include <stdio.h>
#include <stdlib.h>

void devolucion(float pago, float precio, float monedas[2][4]);

int main()
{
    float pago, precio, monedas[2][4];
    printf("Ingrese el pago: ");
    scanf("%f", &pago);
    printf("Ingrese el precio: ");
    scanf("%f", &precio);
    devolucion(pago, precio, monedas);
    printf("\n\n");
    system("pause");
    return 0;
}

void devolucion(float pago, float precio, float monedas[2][4])
{
    float devolucion;
    int i;
    devolucion = pago - precio;
    printf("\n\nLa devolucion es: %.2f", devolucion);
    monedas[0][0] = 0.50;
    monedas[0][1] = 0.25;
    monedas[0][2] = 0.10;
    monedas[0][3] = 0.05;
    for(i=0; i<4; i++)
    {
        monedas[1][i] = devolucion / monedas[0][i];
        devolucion = devolucion - (monedas[1][i] * monedas[0][i]);
    }
    printf("\n\nLa cantidad de monedas a devolver es: \n");
    for(i=0; i<4; i++)
    {
        printf("%.2f: %.0f\n", monedas[0][i], monedas[1][i]);
    }
}