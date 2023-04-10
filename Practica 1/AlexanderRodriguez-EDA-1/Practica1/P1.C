#include<stdio.h>

void movimiento_torre();
void movimiento_alfil();
int main(){
   short opcion=0;
   int i,j;
   char fil,col;
   
   while(1){
      printf("\n\t*** movimiento alfil y torre ***\n");
      printf("¿ Que movimiento desea realizar?\n");
      printf("1) movimiento del la torre.\n");
      printf("2) movimiento de el alfil.\n");
      printf("3) salir.\n");
      scanf("%d", &opcion);
      switch(opcion){
         case 1:
          movimiento_torre();
          break;
         case 2:
         movimiento_alfil();
         break;
         case 3:
         salir;
         break;
        }
   }
}
void movimiento_torre(){
    int i,j,fil,col,k=0;
    Printf("ingresar la fila y la columna de la torre");
    Printf("\nColumnas");
    scanf("%i",&col);
    printf("\nfilas");
    scanf("%i",&fil);

    char movimiento_torre[fil][col];
    char movimiento_torre[fil*col];
    for(i=0 ; i<col ; i++)
       for(j=0 ; j<fil ; j++)
          movimiento_torre[i][j]=movimiento_torre[k++];

    printf("los movimientos quedan asi:\n");
    for(i=0 ; i<col ; i++)
       for(j=0 ; j<fil ; j++)
          printf("%c", movimiento_torre[i][j]);
    printf("\n");
}
void movimiento_alfil{
int i,j,fil,col,k=0;
    Printf("ingresar la fila y la columna de la torre");
    Printf("\nColumnas");
    scanf("%i",&col);
    printf("\nfilas");
    scanf("%i",&fil);

    char movimiento_alfil[fil][col];
    char movimiento_alfil[fil*col];
    for(i=0 ; i<col ; i++)
       for(j=0 ; j<fil ; j++)
          movimiento_alfil[i][j]=movimiento_alfil[k++];

    printf("los movimientos quedan asi:\n");
    for(i=0 ; i<col ; i++)
       for(j=0 ; j<fil ; j++)
          printf("%c", movimiento_alfil[i][j]);
    printf("\n");
}       

    
    