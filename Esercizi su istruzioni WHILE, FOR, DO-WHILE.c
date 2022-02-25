#include<stdio.h>
int main(void)
{
    int N;
    float voto, somma=0;

    puts("Inserire il numero di voti:");
    do{
        scanf("%d", &N);
    }
    while(N<=0);

    for(int i = 0; i < N; i++){
        puts("Inserisci un voto:");
        do{
            scanf("%f", &voto);
        }while (voto<0.0 && voto>10.0);
            somma = somma + voto;

    }
    printf("La media è:%.2f", somma/N);    
}

/*INSERIRE N NUMERI POSITIVI INTERI E MOSTRARE IN OUTPUT QUANTI SONO PARI E QUANTI DISPARI, LA MEDIA TRA TUTTI E 
IL MAX E IL MIN.*/

#include<stdio.h>
int main(void)
{
    int N, numero, pari=0, dispari=0;
    float somma=0;
    int max, min;

    puts("Inserisci il numero di numeri:");
    do{
        scanf("%d", &N);
        }
    while(N < 1);

        
    for(int i=0; i < N-1; i++){
        puts("Inserisci un numero intero positivo:");
        do{
        scanf("%d", &numero);
        }
    while(numero<0);
    max = min = numero;
        somma=somma+numero;
        
        if(numero%2==0)
            pari++;
        else
        dispari++;

        if(numero%2==0)
            pari++;
        else
        dispari++;
        
    if (numero>max)
    max = numero;

    if (numero<min)
    min = numero;
    }
    printf("\nNumero pari:%d", pari);
    printf("\nNumero dispari:%d", dispari);
    printf("\nMax:%d", max);
    printf("\nMin:%d", min);
    printf("\nMedia:%f", somma/N);
}

//Esercizio
#include<stdio.h>
int main(void)
{
    char carattere;
    unsigned int contatore = 0;

    puts("Inserisci testo:")

    while((carattere = getchar()) && carattere != EOF){
        switch(carattere){
            case '':
            case '\t':
            case '\n':
            break;
            default: 
            contatore++;
            break;

        }
    }
    printf("\nNumero di caratteri:%d", contatore);

}

//Esercizio (Sequenza di Fibonacci)
#include<stdio.h>
int main(void)
{
    int a = 1, b = 0, c = 0;
    int riga;

    puts("Inserisci riga massima");
    
    do{
        scanf("%d", &riga);
        puts("");
    }while (riga<1);

    for(int i = 1; i < riga;){
        if(i<riga){
            printf("%d\n", a);
            i++;
        }
        b=a+c;
        if(i<riga){
            printf("%d\n",b);
        }
        c=a+b;
        if(i<riga){
            printf("%d\n",c);
        }
    a=c+b;
}
}


