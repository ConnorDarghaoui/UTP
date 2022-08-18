/**
 * @file program1.c
 * @author Luis Boniche (luis.boniche@utp.ac.pa)
 * @brief 
 * @version 0.1
 * @date 2022-08-16
 * 
 * @copyright Copyright (c) 2022
 * 
 * Calcular el salario semanal (sm) que debe pagar
 * a un empleado considerando que trabajó una cantidad 
 * de horas (h) a razón del salario por hora (sh) asignado. 
 * Imprima como salida el salario Semanal.
 */

#include <stdio.h>

int main()
{
    //declaracion de variables
    int h, sh, sm;
    //ingreso de datos
    printf("Ingrese el numero de horas trabajadas: ");
    scanf("%d", &h);
    printf("Ingrese el salario por hora: ");
    scanf("%d", &sh);
    //calculo de salario semanal
    sm = h * sh;
    //impresion de resultados
    printf("El salario semanal es: %d", sm);
    return 0;
}