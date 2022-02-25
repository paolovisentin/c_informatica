//solo  if
#include<stdio.h>
int main()
{
    int x;
    puts("Inserisci numero:");
    scanf("%d", &x);

    if (x<0)
    {
        x=x*(-1);
        printf("Risultato finale: %d", x);

    }
}

//if else
#include<stdio.h>
int main()
{
    int x;
    puts("Inserisci numero:");
    scanf("%d", &x);

    if (x<0)
    {
        x=x*(-1);
        printf("Risultato finale: %d", x);

    }
    else{
        printf("Risultato finale: %d", x);
    }
}

//else if

#include<stdio.h>
int main()
{
    int eta;
    puts("Inserisci età:");
    scanf("%d", &eta);

    if (eta>=18)
    {
        printf("Sei maggiorenne");

    }
    else if(eta>=0 && eta<18)
    {
        printf("Sei minorenne");
    }
    else{
        printf("Età non corretta");
    
    }
}