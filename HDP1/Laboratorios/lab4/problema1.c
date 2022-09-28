/**
 * @file problema1.c
 * @author luis.boniche (luis.boniche@utp.ac.pa)
 * @brief tringulo inverso
 * @date 2022-08-25
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**
     * @brief declaracion de variables
     *
     * @var i contador de ciclos que controla el numero de columnas
     * @var j contador de ciclos 
     * @var n numero de base del triangulo
     * @var c  almacena el caracter a imprimir
     */
    int i,j,n; 
    char c; 
    printf("Ingrese el caracter a imprimir: ");
    scanf("%c",&c);
    printf("Ingrese el numero de caracteres que se utilizaran como base del triangulo: ");
    scanf("%d",&n);
    //ciclo que controla el numero de filas
    for(i=n;i>=1;i--) 
    {
        //ciclo que controla el numero de columnas
        for(j=1;j<=i;j++) 
        {
            //imprime el caracter
            printf("%c",c);
        }
        //salto de linea
        printf("\n");
    }
    return 0;
}