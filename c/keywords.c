/*
Novas keywords inseridas nos padrões C95 e C11
*/
#include <stdio.h>
#include <stdlib.h>

/*
_Bool 

Seu valor é tratado como unsigned int, porém todo valor superior a zero é
convertido para 1, caso contrário, 0. 

Compiladores: gcc, Clang e CL 19
*/

/*

_Exit

Termina o programa de forma abrupta, não chama função atexit, não fecha 
conexões, não fecha arquivos, etc.  

Diferença entre _Exit(1) e exit(1)

exit(1)

Termina o programa de forma normal, chamando atexit, fechando conexões e 
arquivos abertos pelo programa. 

atexit

Define qual função será chamada antes de programa ser fechado. 

Compiladores: gcc, Clang e CL 19

*/

/* 

_Noreturn

Define que a função não retornará ao endereço em stack frame. 
Não acrescenta nenhuma capacidade real do código, mas aumenta 
sua estabilidade e segurança. 

TODO: Saber se endereço de retorno é enviado para stack frame mesmo assim. 

Compiladores: gcc e Clang

*/

_Noreturn void byebye (char *msg, int ret) {
  puts (msg);
  exit (ret);
}

/*

_Generic

Indica ao compilador qual entidade deve ser usada com base no 
tipo da expressão. 
Primeiro o compilador identifica o tipo do seletor e procura 
pela sua função correspondente. 
Inserido a partir de C11.

Compiladores: gcc, Clang e CL 19

*/

void snapi (int i) {
  // Pertence a explicação de _Generic
  printf ("%d\n", i);
}

void snapc (char c) {
  // Pertence a explicação de _Generic
  printf ("%c\n", c);
}

void snapf (float f) {
  // Pertence a explicação de _Generic
  printf ("%f\n", f);
}


void washer (void) {
  // Pertence a explicação de _Exit exit atexit
  printf ("3\n");
}

void sweeper (void) {
  // Pertence a explicação de _Exit exit atexit
  printf ("2\n");
}

int main (void)
{

  // _Bool
  _Bool yes = -1, no = 0;
  yes = yes || no;
  no = no && yes;
  yes--;
  ++no;
  ++no;
  printf ("%d %d\n", yes, no); // 0 1

  // _Noreturn
  puts ("Time is long but...");
  byebye ("... life is short", 1);

  // _Exit exit atexit
  int val;
  printf ("Enter an int value:");
  scanf ("%d", &val);
  printf ("1\n");
  atexit (sweeper);
  atexit (washer);
  if (val)
    exit (1);
  else
    _Exit (1);
}