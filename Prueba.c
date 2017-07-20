# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(void) {
  
  int x, y, total;
  
  printf("Cual es el valor de lar dos variables: \n");
  scanf("%i %i",&x, &y);
  fflush(stdin);
  total = x + y;
  
  printf("El valor de las dos variables es: %i \n", total);
  fflush(stdin);
  getchar();
  
  return 0;
}
