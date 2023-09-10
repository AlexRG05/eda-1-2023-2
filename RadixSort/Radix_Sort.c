#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>
// bool, true, false

#include <math.h>


#include "Queue.h"
// va con comillas porque es nuestro


//         Código que nos ayudará en la depuración de los programas
#ifndef DBG_HELP
#define DBG_HELP 0
#endif  

#if DBG_HELP > 0
#define DBG_PRINT( ... ) do{ fprintf( stderr, "DBG:" __VA_ARGS__ ); } while( 0 )
#else
#define DBG_PRINT( ... ) ;
#endif  

typedef int Item;

void print( int* list, size_t tam, char* msg )
{
	printf( "%s", msg );
	for( size_t i = 0; i < tam; ++i )
    {
		printf( "%d, ", list[ i ] );
	}
	printf( "\n" );
}

// Determina en que colas 
int subKey( int val, int pos, int radix )
{
    int divisor = pow (10,pos-1);

   return (val/ divisor) % radix;
}

void collect( int list[], Queue* queues[], int radix )
{
   int index = 0;
   for (int i = 0 ; i < radix; ++i) 
   {
    while(Queue_IsEmpty(queues[i]) == false)
    {
        int val;
        Queue_Dequeue (queues[i],&val);
        list [index] = val;
        ++index;
    }
   }
}

void radix_sort( int list[], size_t elems, int pos, int radix )
{ 
    Queue* queues[radix];
    for (size_t i = 0; i < radix; ++i)
    {
        queues[i]=Queue_New();
    } 
        for (int i = 1; i <= pos; ++i)
        {
            for (int j = 0; j < elems; ++j)
            {
                int whichQ = subKey ( list [j],i , radix);
                Queue_Dequeue (queues[whichQ j,list[j]]);
            }
            collect(list,queues,radix);
        }
    
}
//Funcion activaddora (wraper)
void RadixSort10( int list[], int elems ) {
    radix_sort(list,elems, 3, 10);
}

#define NUM_ELEMS 7

int main()
{
    Item list[ NUM_ELEMS ] = { 630, 421, 527, 911, 912, 266, 85 };

	print( list, NUM_ELEMS, "  Antes: " );

   RadixSort10( list, NUM_ELEMS );//Funcion de activacion

	print( list, NUM_ELEMS, "Después: " );
	
	return 0;
}