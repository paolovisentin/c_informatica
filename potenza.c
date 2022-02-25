#include<stdio.h>
static inline int pot (int p) {return p*p;}

int main()
{
    int potenza;

    puts("Inserisci numero: ");
    scanf("%d", &potenza);

    printf("Il risultato di", potenza," è: %d", pot(potenza));
}