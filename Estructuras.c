#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "Estructuras.h"

//    int id;
//    int idCliente;
//    int nroCuenta;
//    int tipoCuenta; 1. Caja de Ahorro en Pesos, 2. Caja de Ahorro en Dólares, 3. Cta Cte en $
//    float costoMensual;
//    float saldo;
//    int eliminado;

void cargaUnaCuenta (stCliente C[], int vC, stCuenta Cta[], int* vCta)
{
    stCuenta Cuenta;
    printf("Ingrese un Id de Cliente: \n");
    scanf("%d", &Cuenta.idCliente);

    while (buscaIdCliente(C, vC, Cuenta.idCliente) == 0)//1 existe y 0 no.
    {
        printf("Id de Cliente no existente.\n");
        printf("Ingrese un Id de Cliente: \n");
        scanf("%d", &Cuenta.idCliente);
    }

    Cuenta.id = *vCta;

    printf("Cree un n%c de Cuenta: \n", 167);
    scanf("%d", &Cuenta.nroCuenta);

    while (buscaIdCuenta(Cta, *vCta, Cuenta.nroCuenta) == 1)//1 existe y 0 no.
    {
        printf("N%c de Cuenta existente.\n", 167);
        printf("Cree otro n%c de Cuenta: \n", 167);
        scanf("%d", &Cuenta.nroCuenta);
    }

    printf("Seleccione el tipo de cuenta que quiere abrir: \n");
    printf("1. Caja de ahorro en pesos. \n");
    printf("2. Caja de ahorro en dolares. \n");
    printf("3. Cuenta corriente en pesos. \n");
    scanf("%d", &Cuenta.tipoCuenta);

    while(Cuenta.tipoCuenta > 3 || Cuenta.tipoCuenta < 1)
    {
        printf("Seleccione un tipo de cuenta valido: \n");
        printf("1. Caja de ahorro en pesos. \n");
        printf("2. Caja de ahorro en dolares. \n");
        printf("3. Cuenta corriente en pesos. \n");
        scanf("%d", &Cuenta.tipoCuenta);
    }

    if(Cuenta.tipoCuenta == 1)
    {
        Cuenta.costoMensual = 10;
    }

    if(Cuenta.tipoCuenta == 2)
    {
        Cuenta.costoMensual = 20;
    }

    if(Cuenta.tipoCuenta == 3)
    {
        Cuenta.costoMensual = 30;
    }

    Cuenta.saldo = 0;

    printf("Ingrese estado de la cuenta: \n");
    printf("0. si esta activo.\n ");
    printf("1. si no esta activo.\n ");
    scanf("%d", &Cuenta.eliminado);

    while(Cuenta.eliminado != 1 || Cuenta.eliminado !=0)
    {
        printf("Ingrese un numero valido: \n");
        printf("0. si esta activo.\n ");
        printf("1. si no esta activo.\n ");
        scanf("%d", &Cuenta.eliminado);
    }

    Cta[*vCta] = Cuenta;
    *vCta++;
}

