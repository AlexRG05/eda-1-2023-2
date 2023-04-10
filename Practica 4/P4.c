#include<stdio.h>
#include<stdlib.h>

void movimiento_torre();
void movimiento_alfil();
void movimiento_rey();
void movimiento_reina();
void movimiento_caballo();

int main(){
    short opcion=0;
    int salir;

    while(1){
        printf("\n\t*** movimientos piezas de ajedrez***\n");
        printf("¿que movimientos desea realizar?\n");
        printf("1) movimiento de la torre.\n");
        printf("2) movimiento de el alfil.\n");
        printf("3) movimiento del rey.\n");
        printf("4) movimiento de la reina.\n");
        printf("5) movimiento de el caballo.\n");
        printf("6) salir.\n");
        switch(opcion){
            case 1:
                movimiento_torre();
                break;
            case 2:
                movimiento_alfil();
                break;
            case 3:
                movimiento_rey();
                break;
            case 4:
                movimiento_reina();
                break;
            case 5:
                movimiento_caballo();
                break;
            case 6:
                return 0;
            default:
                printf("salir.\n");   
        }
    return 0;   
    }
}

void movimiento_torre(){
    int a,b;
    char tablero[8][8];

int global;
int main(void)
{
  static int a=9;
  int n;
  int*apt=(void*)malloc(9*sizeof(int));
  int*apt=(void*)calloc(n,sizeof(int));
  apt=realloc(apt,18*sizeof(void));
  free(apt);
  return 0;
}

    for(a=0 ; a<8 ; a++)
    {
      for(b=0 ; b<8; b++)
      {
        elseif((a==0 && b==0) || (a==0 && b==7) || (a==7 && b==0) || (a==7 && b==7));{

            tablero[a][b]='T';
        }
        else
        {
           tablero[a][b]='\t';
        }
      }
    }   
}   

void movimiento_alfil(){
    int a,b;
    char tablero[8][8];

int global;
int main(void)
{
  static int a=9;
  int n;
  int*apt=(void*)malloc(9*sizeof(int));
  int*apt=(void*)calloc(n,sizeof(int));
  apt=realloc(apt,18*sizeof(void));
  free(apt);
  return 0;
}

    for(a=0 ; a<8 ; a++)
    {
      for(b=0 ; b<8; b++)
      {
        elseif((a==0 && b==2) || (a==0 && b==5) || (a==7 && b==2) || (a==7 && b==5));{

            tablero[a][b]='A';
        }
        else
        {
           tablero[a][b]='\t';
        }
      }
    }
}

void movimiento_rey(){
    int a,b;
    char tablero[8][8];

int global;
int main(void)
{
  static int a=9;
  int n;
  int*apt=(void*)malloc(9*sizeof(int));
  int*apt=(void*)calloc(n,sizeof(int));
  apt=realloc(apt,18*sizeof(void));
  free(apt);
  return 0;
}


    for(a=0 ; a<8 ; a++)
    {    
      for(b=0 ; b<8; b++)
      {
        elseif((a==0 && b==4) || (a==7 && b==4));{

            tablero[a][b]='r';
        }
        else
        {
           tablero[a][b]='\t';
        }
      }
    }
}

void movimiento_reina(){
   int a,b;
   char tablero[8][8];

int global;
int main(void)
{
  static int a=9;
  int n;
  int*apt=(void*)malloc(9*sizeof(int));
  int*apt=(void*)calloc(n,sizeof(int));
  apt=realloc(apt,18*sizeof(void));
  free(apt);
  return 0;
}

    for(a=0 ; a<8 ; a++)
    {
      for(b=0 ; b<8; b++)
      {
        elseif((a==0 && b==3) || (a==7 && b==3));{

            tablero[a][b]='R';
        }
        else
        {
           tablero[a][b]='\t';
        }
      }
    }
}

void movimiento_caballo(){
    int a,b;
    char tablero[8][8];

int global;
int main(void)
{
  static int a=9;
  int n;
  int*apt=(void*)malloc(9*sizeof(int));
  int*apt=(void*)calloc(n,sizeof(int));
  apt=realloc(apt,18*sizeof(void));
  free(apt);
  return 0;
}
    for(a=0 ; a<8 ; a++)
    {
      for(b=0 ; b<8 ; b++)
      {
        elseif((a==0 && b==1) || (a==0 && b==6) || (a==7 && b==1) || (a==7 && b==6));{

            tablero[a][b]='C';
        }
        else
        {
           tablero[a][b]='\t';
        }
      }
    }
}

for(a=0; a<8; a++)
{
    printf("\n");
    for(b=0; b<8; b++)
    {
        printf("%c", tablero[a][b]);
    }
}






