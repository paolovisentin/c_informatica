//Esperimenti
//PAOLO VISENTIN

#include<stdio.h>
int main ()
{   
    int numero_esperimenti=0, numero_max=0;
    float a, risultato;

    printf("Inserire valori da 0 a 1\n");
    printf("Inserire il numero di esperimenti che si desidera valutare: ");
    scanf("%d", &numero_max);
    
    while (numero_esperimenti <= numero_max)
    {
        printf("Numero di esperimenti confermati: %d \n", numero_esperimenti);
        printf("Qual è il risultato ottenuto?");
        scanf("%f",&risultato);
        printf("\n");
        printf("Media risultati:%.3f" ,a/numero_esperimenti);
        printf("\n");

        if (risultato>=0 && risultato<=1)    //il risultato inserito è valido (cioè tra 0 e 1)
        { 
            printf("\nRISULTATO ACCETTATO\n");
            numero_esperimenti=numero_esperimenti+1;
            a=(a+risultato);
        }
        else 
        {   
            printf("\n");
            printf("\n>>>ERRORE<<<\n");
            printf("\n");
        }   


        if (numero_esperimenti>=10)
        {
            printf("---ESPERIMENTO VALIDO---\n");
            printf("___________________________\n");
            printf("\n");       
        }   

    
        if (numero_esperimenti<10)
        {
            printf("ESPERIMENTO NON VALIDO!\n");   
            printf("___________________________\n");
            printf("\n");
        }   
    }
    return 0;
}
