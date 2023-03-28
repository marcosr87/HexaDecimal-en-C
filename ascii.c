#include <stdio.h>

main(){
  unsigned  char pal;
  printf("\n\n \t Ingrese un caracter: ") ;
  scanf("%c", &pal);
  printf("\n\n El equivalente de %c es: %d ", pal, pal);
  getch();
  return 0;
}