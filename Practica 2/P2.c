#include <stdio.h>
void movimiento_rey();
void movimiento_reina();

int main(){
  short opcion=0;
  
  while(1){
      printf("\n\t*** movimento rey y reina***\n");
      printf("¿Que movimiento dese realizar?\n");
      printf("1) movimiento de el rey.\n");
      printf("2) movimiento de la reina.\n");
      printf("3) salir.\n");
      switch(opcion){
        case 1:
            movimiento_rey();
            break;
        case 2:
           movimiento_reina();
           break;
        case 3:
            return 0;
        default:
            printf("salir.\n");
      }
  }
  return 0;
}

void movimiento_rey(){
    int ren, col, x, y, k=0;
    printf("Ingrese los renglones y las columnas de el rey:\n");
    printf("\nRenglones:");
    scanf("%i",&ren);
    printf("\nColumnas:");
    scanf("%i",&col);
    char movimiento_rey[ren][col];
    char movimiento[ren*col];

    for(x=0 ; x<col ; x++)
       for(y=0 ; y<ren ; y++)
          movimiento_rey[x][y]= movimiento[k++];

    printf("El movimiento del rey es:\n");
    for(x=0 ; x<col ; x++)
       for(y=0 ; y<ren ; y++)
          printf("%c", movimiento_rey[x][y]);
    printf("\n");
}

void movimiento_reina(){
    int ren, col, x, y, k=0;
    printf("Ingrese los renglones y las columnas de la reina");
    printf("\nRenglones:");
    scanf("%i",&ren);
    printf("\nColumnas:");
    scanf("%i",&col);

    char movimiento_reina[ren][col];
    char movimiento[ren*col];

    for(x=0 ; x<col ; x++)
       for(y=0 ; y<ren ; y++)
           movimiento_reina[x][y]= movimiento[k++];
    
    printf("El movimiento de la reina es:\n");
    for(x=0 ; x<col ; x++)
       for(y=0 ; y<ren ; y++)
          printf("%c", movimiento_reina[x][y]);
    printf("\n");
}

