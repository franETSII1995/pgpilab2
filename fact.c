#include <stdio.h>
#include <stdlib.h>

#include "calcfact.h"

//Calculadora de factoriales
int main(int argc, char **argv)
{
  int n;
  if (argc!=2)
  {
	printf("uso: %s <nero>\n", argv[0]);
        exit(-1);
  }
  n=atoi(argv[1]);
  printf ("resultado: el factorial de [%d] es [%d].\n", n, calcfact(n));
}
