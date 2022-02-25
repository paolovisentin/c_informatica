//ESEMPIO

#include<stdio.h>
int main(void)
{
    char c;

    c = getchar();
    printf("'%c' nella ASCII table: %d\n", c, c);
}


//ESEMPIO

#include<stdio.h>
int main(void)
{
    int x,y;
    float divisione;
    puts("Insierisci primo valore:");
    scanf("%d", &x);
    puts("Inserisci secondo valore:");
    scanf("%d", &y);
    
    divisione = (float) x/y;
    
    printf("Risultato: %.2f", divisione);
    
}


//ESEMPIO
#include<stdio.h>

int main(void)
{
    int giorno, mese, anno;
    
    puts("Inserisci data:");
    scanf("%2d-%2d-%4d",&giorno, &mese, &anno);

    printf("\nGiorno:%d", giorno);
    printf("\nMese:%d\n", mese);
    printf("Anno:%d\n", anno);
}