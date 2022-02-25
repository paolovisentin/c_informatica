#include<stdio.h>
int main(){
    float quotient;
    int dividend = 0.0f, divisor = 0.0f;

    puts("Inserisci valori della divisione: ");
    scanf("%d/%d", &dividend, &divisor);

    quotient = (float)dividend/divisor;
    
    printf("Risultato: %.3f", quotient);
}

/*
OUTPUT: 

Inserisci valori della divisione: 34/5
Risultato: 6.800

*/


//senza cast
#include<stdio.h>
int main(){
    float quotient;
    int dividend = 0.0f, divisor = 0.0f;

    puts("Inserisci valori della divisione: ");
    scanf("%d/%d", &dividend, &divisor);

    quotient = dividend/divisor;
    
    printf("Risultato: %.3f", quotient);
}

/*
OUTPUT: 

Inserisci valori della divisione: 34/5
Risultato: 6.000

*/

