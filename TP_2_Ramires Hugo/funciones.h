#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

void ord_alf(EPersona[], int);
/** \brief permite cargar un nuevo usuario
 *
 * \param Epropietarios[] el array
 * \param int largo
 * \return int
 *
 */
int alta(EPersona[], int);
/** \brief permite dar de baja a un usuario
 *
 * \param Epropietarios[] el array
 * \param int largo
 * \return int
 *
 */
int baja(EPersona[], int);
/** \brief busca lugar libre en el array
 *
 * \param Epropietarios[] el array
 * \param int largo
 * \return int
 *
 */
int buscarLugarLibre(EPersona[],int);
/** \brief inicializa los estados
 *
 * \param Epropietarios[] el array
 * \param int largo
 * \return void
 *
 */
void inicializarpersonaEstado(EPersona[], int);
/** \brief se cargan datos por hardcode
 *
 * \param Epropietarios[] el array
 * \return void
 *
 */
void inicializarpersonaHardCode(EPersona[]);
/** \brief muestra todas las personas cargados
 *
 * \param Epropietarios[] el array
 * \param int largo
 * \return void
 *
 */
void mostrarListapersonas(EPersona[], int);

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[],int dni ,int tan);

#endif // FUNCIONES_H_INCLUDED
