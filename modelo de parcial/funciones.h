#define FUNCIONES_H_INCLUDED
typedef struct
{
    char codigoDelProducto;
    char codigoDelProvedor;
} Eproducto_Eprovedor;
typedef struct
{
    char descripcionDelProducto [50];
    float importe;
    int cantidad;
    Eproducto_Eprovedor.codigoDelProducto;
} Eproducto;
typedef struct
{
    char descripcionDelProveedor [50];
    Eproducto_Eprovedor.codigoDelProvedor;
} Eprovedor;


int menu(char items[]); //valida la opcion

void ValidarCadena(char[]);

void ValidarCodigo(char[]);

void altaDeProducto(struct Eproducto[]);
