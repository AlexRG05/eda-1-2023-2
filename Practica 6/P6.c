#include <stdio.h>
#include <stdlib.h>
 

 
struct INFO
{
 int num;
};
 
struct PALINDROMO
{
 struct INFO elemento;
 struct PALINDROMO *p_anterior;
 struct PALINDROMO *p_siguiente;
};
 
struct PALABRA
{
 int palindromos;
 struct PALINDROMO *primero;
 struct PALINDROMO *ultimo;
};
 
 
 

void inicializarpalabra( struct PALABRA **palabra )
{
 
 struct PALABRA *temp = (struct PALABRA *) malloc(sizeof(struct PALABRA));
 
 temp->palindromos = 0;
 temp->primero = NULL;
 temp->ultimo = NULL;
 
 (*palabra) = temp;
 
};
 
 
 

void insertIzqpalabra( struct PALABRA **palabra, int dato )
{
 
 
 struct PALINDROMO *temp = (struct PALINDROMO *) malloc(sizeof(struct PALINDROMO));
 
 

 if( (*palabra)->primero == NULL )
 {
 temp->elemento.palindromo = dato; 
 temp->p_anterior = NULL; 
 temp->p_siguiente = NULL;
 
 (*palabra)->primero = temp; 
 (*palabra)->ultimo = temp;
 }
 else
 {
 temp->elemento.palindromo = dato; 
 temp->p_anterior = NULL; 
 temp->p_siguiente = (*palindromo)->primero; 
 
 (*palindromo)->primero->p_anterior = temp; 
 (*palindromo)->primero = temp; 
 };
 
 
 (*palabra)->palindromos += 1; 
 
};
 
 

void insertDerpalabra( struct PALABRA **palabra, int dato )
{

 
 
 struct PALINDROMO *temp = (struct PALINDROMO *) malloc(sizeof(struct PALINDROMO));
 
 

 if( (*palabra)->primero == NULL )
 {
 temp->elemento.palindromo = dato;
 temp->p_anterior = NULL;
 temp->p_siguiente = NULL;
 
 (*palabra)->primero = temp;
 (*palabra)->ultimo = temp;
 }
   
 else
 {
 temp->elemento.palindromo = dato;
 temp->p_anterior = (*palabra)->ultimo;
 temp->p_siguiente = NULL;
 
 (*palabra)->ultimo->p_siguiente = temp;
 (*palabra)->ultimo = temp;
 };
 
 
 (*palabra)->palaindromos += 1;
 
};
 
 
 

void eliminaIzqpalabra( struct PALABRA **palabra )
{
 
 
 struct PALINDROMO *aBorrar;
 
 

 if( (*palabra)->primero == NULL )
 {
 printf( "No puede eliminar Nodos de una palabra vacía." );
 }
   
 else if( (*palabra)->palindromos == 1 )
 {
 free(*palabra);
 inicializarpalabra( palabra );
 }
  
 else if( (*palabra)->palindromos > 1 )
 {
 aBorrar = (*palabra)->primero;
 
 (*palabra)->primero->p_siguiente->p_anterior = NULL;
 (*palabra)->primero = (*palabra)->primero->p_siguiente;
 free(aBorrar);
 
 (*palabra)->palindromos -= 1;
 };
 
};
 

void eliminaDerpalabra( struct PALABRA **palabra )
{

 
 struct PALINDROMO *aBorrar;
 
 

 if( (*palabra)->primero == NULL )
 {
 printf( "No puede eliminar palaindromos de una palabra vacía." );
 }
   
 else if( (*palabra)->palindromos == 1 )
 {
 free(*palabra);
 inicializarpalabra( palabra );
 }
 else if( (*palabra)->palindromos > 1 )
 {
 aBorrar = (*palabra)->ultimo;
 
 (*palabra)->ultimo->p_anterior->p_siguiente = NULL;
 (*palabra)->ultimo = (*palabra)->ultimo->p_anterior;
 free(aBorrar);
 
 (*palabra)->palindromos -= 1;
 };
 
};
 
 
 

int tienepalindromosLapalabra( struct PALABRA **palabra )
{

 
 
 int resp = 0;
 
 if( (*palabra)->palindromos != 0 )
 resp = 1;
 
 return resp;
};
 
 
 

void borraLapalabra( struct PALABRA **palabra )
{

 
 struct PALINDROMO *actual, *siguiente;
 actual = (*palabra)->primero;
 
 while( actual != NULL )
 {
 siguiente = actual->p_siguiente;
 free(actual);
 actual = siguiente;
 };
 
 *palabra = NULL;
};
 
 
 

int cuantospalindromosTieneLapalabra( struct PALABRA **palabra )
{

 
 return (*palabra)->palindromos;
};
 
 
 

void cuantospalindromosTieneLapalabra( struct PALABRA **palabraA, struct PALABRA **palabraB )
{

 
 
 struct PALINDROMO *temp = (*palabraA)->primero;
 
 
 
 if( (*palabraB)->primero != NULL )
 {
 borraLapalabra( palabraB ); 
 inicializarpalabra( palabraB );
 };
 
 
 
 if( temp == NULL )
 printf( "La palabra A no contiene palindromos, no se puede copiar nada." );
 else
 {
 while( temp != NULL )
 {

 insertDerpalabra( palabraB, temp->elemento.palindromo );
 
 
 temp = temp->p_siguiente;
 };
 
 };
 
};
 
 
 

int sonIgualesLaspalabras( struct PALABRA **palabraA, struct PALABRA **palabraB )
{

 
 
 struct PALINDROMO *bicA = (*palabraA)->primero;
 struct PALINDROMO *bicB = (*palabraB)->primero;
 int salirBucle=0, resp=1;
 
 
 if( bicA == NULL ||  bicB == NULL )
 {
 resp = 0;
 
 if( bicA == NULL )
 printf( "Debe de insertar antes algún palindromo en la palabra A\n" );
 
 if( bicB == NULL )
 printf( "Debe de insertar antes algún palindromo en la palabra B\n" );
 }
 else
 {
 while( !salirBucle )
 {
 
 if( bicA->elemento.palindromo != bicB->elemento.palindromo )
 {
 resp = 0;
 salirBucle = 1;
 }
 
 else
 {
 
 bicA = bicA->p_siguiente;
 bicB = bicB->p_siguiente;
 
 
 if( (bicA != NULL  &&  bicB == NULL)  ||  (bicA == NULL  &&  bicB != NULL) )
 {
 resp = 0;
 salirBucle = 1;
 }
   
 else if( (bicA == NULL  &&  bicB == NULL) )
 {
 salirBucle = 1;
 };
 
 };
 
 };
 
 };
 
 return resp;
 
};
 
 

void imprimepalabra( struct PALABRA **palabra )
{
 
 
 
 struct PALINDROMO *bic = (*palabra)->primero;
 
 
 
 if( bic == NULL )
 printf( "La palabra no contiene Nodos." );
 else
 {
 
 printf( "Su palabra contiene: " );
 
 while( bic != NULL )
 {
 printf( "%i, ", bic->elemento.palindromo );
 bic = bic->p_siguiente;
 };
 
 printf( "\n\n" );
 
 };
 
};
 

 
 
 
 
 
int main()
{
 enum opciones{ salir, insertIzq, insertDer, eliminaIzq, eliminaDer, impIzq, impDer, impTodos, quedanpalindromos, cuantospalindromosHay, copiapalabra, sonpalabrasIguales, borraLapalabra } opc;
 struct PALABRA *palabraA;
 struct PALABRA *palabraB;
 int eleccion, nuevoDato;
 
 

 inicializarpalabra( &palabraA );
 inicializarpalabra(&palabraB );
 
 
 

 do{
 printf( "\n\n" );
 printf( "Indique que desea hacer con los palindromos de la palabra:\n\n" );
 printf( "   1. Añadir un palindromo por la izquierda\n" );
 printf( "   2. Añadir un palindromo por la derecha\n" );
 printf( "   3. Eliminar el primer palaindromo\n" );
 printf( "   4. Eliminar el ultimo palindromo\n" );
 printf( "   5. Mostrar el primer palindromo\n" );
 printf( "   6. Mostrar el ultimo palindromos\n" );
 printf( "   7. Muestra todos los palindromos\n" );
 printf( "   8. Quedan Nodos?\n" );
 printf( "   9. Cuantos Nodos hay?\n" );
 printf( "  10. Copiar palabraA a una nueva palabraB\n" );
 printf( "  11. palabraA es igual que palabraB?\n" );
 printf( "  12. Borrar la palabraA\n\n" );
 printf( "   0. Salir del programa.\n" );
 
 
 do{
 scanf( "%i", &eleccion );
 } while( eleccion < 0  &&  eleccion > 12 );
 opc = (enum opciones)(eleccion);
 
 
 printf( "\n\n" );
 
 
 switch( opc )
 {
 
 
 case insertIzq:
 printf( "Introduzca el número entero que contendrá el nuevo palindromo de la palabra: " );
 scanf( "%i", &nuevoDato );
 insertIzqpalabra( &palabraA, nuevoDato );
 break;
 
 
 
 case insertDer:
 printf( "Introduzca el número entero que contendrá el nuevo palindromo de la palabra: " );
 scanf( "%i", &nuevoDato );
 insertDerpalabra( &palabraA, nuevoDato);
 break;
 
 
 
 case eliminaIzq:
 eliminaDerpalabra( &palabraA );
 break;
 
 
 
 case eliminaDer:
 eliminaDerpalabra( &palabraA );
 break;
 
 
 
 case impIzq:
 if( tienepalindromosLapalabra( &palabraA ) )
 printf( "El primer palindromo contiene un: %i\n", palabraA->primero->elemento.palindromo );
 else
 printf("La palabra no contiene palindromos");
 break;
 
 
 
 case impDer:
 if( tienepalindromosLapalabra( &palabraA ) )
 printf( "El ultimo palindromo contiene un: %i\n", palabraA->ultimo->elemento.palindromo );
 else
 printf("La palabra no contiene palindromos");
 break;
 
 
 
 case impTodos:
 imprimepalabra( &palabraA );
 break;
 
 
 
 case quedanpalindromos:
 if( tienepalindromosLapalabra( &palabraA ) )
 printf( "La palabra contiene palindromos." );
 else
 printf( "La palabra no contiene palindromos." );
 
 break;
 
 
 
 case cuantospalindromosHay:
 printf( "La palabra contiene %i palindromos.",  cuantospalindromosTieneLapalabra( &palabraA ) );
 break;
 
 
 
 case copiapalabra:
 copiarLaBicola( &palabraA, &palabraB );
 break;
 
 
 
 case sonpalabrasIguales:
 if( sonIgualesLaspalabras( &palabraA, &palabraB ) )
 printf( "Las palabras son idénticas" );
 else
 printf( "Las palabras son diferentes" );
 break;
 
 
 
 case borraBicola:
 borraLapalabra( &palabraA ); // Se borran todos los nodos...
 inicializarpalabra( &palabraA ); // ... y después se inicializa.
 break;
 
 
 
 case salir:
 system("clear");
 break;
 
 };
 
 
 } while( opc != salir );
 

 borraLapalabra( &palabraA );
 borraLapalabra( &palabraB );
 
};
