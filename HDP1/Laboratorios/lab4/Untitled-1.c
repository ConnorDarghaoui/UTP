#include <stdio.h>
#include <stdlib.h>

// Prototipos de funciones
void monedas(float monto,int *moneda1,int *moneda2,int *moneda3,int *moneda4,int *moneda5);
void imprimir(int moneda1,int moneda2,int moneda3,int moneda4,int moneda5);


int main()
{
    //variable que guarda el monto a pagar
    float monto; 
    //variables que guardan la cantidad de monedas
    int moneda1,moneda2,moneda3,moneda4,moneda5;
    //variable que guarda la respuesta del usuario
    char respuesta; 
    //ciclo que se repite hasta que el usuario no desee hacer otro cambio
    do 
    {
        printf("ingrese el monto a pagar\n");
        //se guarda el monto a pagar
        scanf("%f",&monto);
        //si el monto es mayor a 5.00 dolares se muestra un mensaje de error
        if(monto>5) 
        {
            printf("el monto no puede ser mayor a 5.00 dolares\n");
        }
        //si el monto es menor o igual a 5.00 dolares se procede a calcular la cantidad de monedas
        else 
        {
            //se llama a la funcion monedas
            monedas(monto,&moneda1,&moneda2,&moneda3,&moneda4,&moneda5);
            //se llama a la funcion imprimir
            imprimir(moneda1,moneda2,moneda3,moneda4,moneda5); 
        }
        printf("desea hacer otro cambio?\n");
        scanf("%s",&respuesta); //se guarda la respuesta del usuario
    }while(respuesta=='s'); //si la respuesta es s se repite el ciclo
    return 0;
}

void monedas(float monto,int *moneda1,int *moneda2,int *moneda3,int *moneda4,int *moneda5) //funcion que calcula la cantidad de monedas
{
    //se calcula la cantidad de monedas de 1.00, se divide el monto entre 1.00
    *moneda1=monto/1; 
    //se calcula la cantidad de monedas de 0.50, se resta el monto menos la cantidad de monedas de 1.00 y se divide entre 0.50
    *moneda2=(monto-(*moneda1*1))/0.5;
    //se calcula la cantidad de monedas de 0.25, se resta el monto menos la cantidad de monedas de 1.00 y la cantidad de monedas de 0.50 y se divide entre 0.25
    *moneda3=(monto-(*moneda1*1)-(*moneda2*0.5))/0.25; 
     //se calcula la cantidad de monedas de 0.10, se resta el monto menos la cantidad de monedas de 1.00 y la cantidad de monedas de 0.50 y la cantidad de monedas de 0.25 y se divide entre 0.10
    *moneda4=(monto-(*moneda1*1)-(*moneda2*0.5)-(*moneda3*0.25))/0.1;
    //se calcula la cantidad de monedas de 0.05, se resta el monto menos la cantidad de monedas de 1.00 y la cantidad de monedas de 0.50 y la cantidad de monedas de 0.25 y la cantidad de monedas de 0.10 y se divide entre 0.05
    *moneda5=(monto-(*moneda1*1)-(*moneda2*0.5)-(*moneda3*0.25)-(*moneda4*0.1))/0.05; 
}

void imprimir(int moneda1,int moneda2,int moneda3,int moneda4,int moneda5)
{
    //se imprime la cantidad de monedas
    printf("la cantidad de monedas de 1.00 es: %d\n",moneda1); 
    printf("la cantidad de monedas de 0.50 es: %d\n",moneda2);
    printf("la cantidad de monedas de 0.25 es: %d\n",moneda3);
    printf("la cantidad de monedas de 0.10 es: %d\n",moneda4);
    printf("la cantidad de monedas de 0.05 es: %d\n",moneda5);
}
