#include <stdio.h>

int main()
{

    char parola[5];

    printf("%d\n", &parola[2]);
    printf("%d\n", &(*(parola+2)));

    return 0;
}

/*int * valore;


valore = puntatore a cella di memoria di un intero    int *
* valore = contenuto della cella di memoria indicata dal puntatore valore  int */

#include <stdio.h>

int main()
{
   int * valore;
   int intero ;
   valore= &intero;
   scanf("%d", valore);
   
   printf("%d\n", * valore);
   printf("%d\n", intero);
   
   
   printf("%d\n", &(* valore));
   printf("%d\n", valore);
   printf("%d\n", &intero);
   
   printf("%d\n", &valore);

    return 0;
}