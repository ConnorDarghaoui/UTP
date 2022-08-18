/**
 * @file programa3.c
 * @author Luis Boniche (luis.boniche@utp.ac.pa)
 * @brief 
 * @version 0.1
 * @date 2022-08-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracion de variables
    int a,b,c; 
    //imprime en pantalla el mensaje 
    printf("Ingrese el valor de a: ");
    //lee el valor ingresado por el usuario 
    scanf("%d",&a); 
    //imprime en pantalla
    printf("Ingrese el valor de b: "); 
    //lee el valor ingresado por el usuario
    scanf("%d",&b); 
    //imprime en pantalla
    printf("Ingrese el valor de c: "); 
    //lee el valor ingresado por el usuario
    scanf("%d",&c); 
    //si alguno de los lados es igual a 0
    if(a==0 || b==0 || c==0){ 
        //imprime en pantalla el mensaje de error 
        printf("No se puede identificar, uno de los lados no tiene valor."); 
    }
    else{
        //si los tres lados son iguales
        if(a==b && b==c){ 
            //imprime en pantalla
            printf("El triangulo es equilatero"); 
        }
        else{
            //si dos lados son iguales
            if(a==b || b==c || a==c){ 
                 //imprime en pantalla
                printf("El triangulo es isosceles");
            }
            else{
                //imprime en pantalla
                printf("El triangulo es escaleno"); 
            }
        }
    }
    //finaliza el programa
    return 0; 
}
