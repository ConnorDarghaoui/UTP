/**
 * @file programa2.c
 * @author luisboniche (luis.boniche@utp.ac.pa)
 * @brief Programa que calcula el promedio de una serie de números
 * @version 0.1
 * @date 2022-08-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h> 

//funcion principal
int main() 
{
    //declaracion de variables
    int h, sh, sm, ex, m;
    //imprime en pantalla
    printf("Ingrese el numero de horas trabajadas: "); 
    //lee el dato ingresado por el usuario
    scanf("%d", &h); 
    //imprime en pantalla
    printf("Ingrese el salario por hora: "); 
    //lee el dato ingresado por el usuario
    scanf("%d", &sh); 
    //condicion
    if (h > 40) 
    {
        //calculo de exceso de horas
        ex = h - 40; 
        //calculo de exceso de salario
        sm = (40 * sh) + (ex * sh * 1.5); 
        //imprime en pantalla
        printf("El salario semanal es: %d", sm); 
    }
    else 
    {
        //calculo de salario semanal
        m = sh * 0.1; 
        sm = (h * sh) - m; 
        //imprime en pantalla
        printf("El salario semanal es: %d", sm); 
    }
    
    //finaliza el programa
    return 0; 
}
