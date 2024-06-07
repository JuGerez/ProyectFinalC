#ifndef ESTRUCTURAS_H_INCLUDED
#define ESTRUCTURAS_H_INCLUDED


typedef struct {
    int id; /// campo único y autoincremental
    int nroCliente;
    char nombre[30];
    char apellido[30];
    char dni[10];
    char email[30];
    stDomicilio domicilio;
    char telefono[12];
    int eliminado; /// 0 si está activo - 1 si está eliminado.
}stCliente;

typedef struct {
    int id;
    int idCliente;
    int nroCuenta;
    int tipoCuenta;
    float costoMensual;
    float saldo;
    int eliminado; /// 0 si está activo - 1 si está eliminado.
}stCuenta;

stCuenta cargaUnaCuenta ();
void muestraUnaCuenta (stCuenta cuenta);

stCliente cargaUnCliente ();
void muestraUnCliente (stCliente cliente);


#endif // ESTRUCTURAS_H_INCLUDED
