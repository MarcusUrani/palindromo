#include <math.h>
#include <string.h>

int main(void) {
  int i, j;
  int tam;
  char string[81];
  scanf("%s", string);
  tam = strlen(string);
  int palindromo = 1;
  for(i=0, j=tam-1; i<j; i++,j--) {
    if(string[i] != string[j]) {
      palindromo = 0;
      break;
    }
  }
palindromo ? printf("S\n") : printf("N\n");
  return 0;
}