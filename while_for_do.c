//ESEMPIO CICLO WHILE
#include<stdio.h>
int main(void)
{
    int numero, contatore = 1;

    puts("Inserisci un numero intero da tastiera:");
    scanf("%d",&numero);

    while (contatore<=numero){
        printf("%d\n", contatore);
        contatore++;

    }
}

//ESEMPIO CICLO FOR
#include<stdio.h>
int main(void)
{
    int numero;
    puts("Inserisci un numero intero da tastiera:");
    scanf("%d", &numero);
    
    for(int i = 0; i<= numero; i++){
        printf("%d\n",i);

    }
}

//ESEMPIO CICLO DO-WHILE
#include<stdio.h>Es
int main(void)
{
    int anni;
    puts("Inserisci il numero di anni:");
    do{
    scanf("%d", &anni);
    }while(anni<0)
    if (anni>=18)
    puts("Sei maggiorenne.");
    else 
    puts("Sei minorenne.");
}

//CICLO WHILE

#include<stdio.h>
int main(void)
{
    int numero;
    int somma=0;

      while (numero != 0)
    {
         puts("Inserisci numero:");
            scanf("%d", &numero);
                somma = somma + numero;
    }
    printf("La somma è: %d", somma);

}
