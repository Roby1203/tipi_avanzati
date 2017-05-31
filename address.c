#include <stdio.h>

int main()
{

float numero_float = 43.8;
float *p_numero_float = &numero_float;

printf("L'indirizzo del numero float e' %p\t", p_numero_float);

return 0;
}
