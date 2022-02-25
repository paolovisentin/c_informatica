//PRIMO ESERCIZIO
#include<stdio.h>
int main(void)
{
    int x, y;

    puts("Inserisci primo numero:");
    scanf("%d", &x);

    puts("Inserisci secondo numero:");
    scanf("%d", &y);

    if (x == y)
    {
        puts("Numeri uguali");
    }

    else {
        puts("Numeri diversi");
    }
}


//SECONDO ESERCIZIO
#include<stdio.h>
int main(void)
{
   int a, b;

    puts("Inserisci a:");
    scanf("%d", &a);

    puts("Inserisci b:");
    scanf("%d", &b);

    if (b*b == a){

    puts("A è il quadrato di b");
    }
    
    else{
        puts("a non è il quadrato di b");
    }
    }

    //TERZO ESERCIZIO (indicare se un numero N è interno o esterno ad un intervallo)
    #include<stdio.h>
    int main (void)
    {
        int A, B, N;

        puts("Inserisci intervallo:");
        scanf("%d %d", &A, &B);

        puts("Inserisci N:");
        scanf("%d", &N);

        if (N>A && N<B){
            printf("N appartiene all'intervallo [%d;%d]", A, B);
        }
        else{
            printf("N non appartiene all'intervallo [%d;%d]", A, B);
        }

    }

    //QUARTO ESERCIZIO ()
    #include<stdio.h>
    int main (void)
    {
        int angolo1, angolo2, angolo3;

        puts("Inserisci gli angoli del triangolo:");
        scanf("%d %d %d", &angolo1, &angolo2, &angolo3);

        if( angolo1 + angolo2 + angolo3 == 180)
                if (angolo1 > 0 && angolo2 > 0 && angolo3 > 0)
                    if (angolo1 != angolo2 && angolo1 != angolo3 && angolo3 != angolo2)
                        puts("Il triangolo è scaleno.");
                    else if (angolo1 == angolo2 && angolo1 == angolo3)
                        puts("Il triangolo è equilatero.");
                    else {
                        puts("Il triangolo è isoscele.");
                    }
    else{
            puts("Il triangolo non esiste.");
        }

        }

//QUINTO ESERCIZIO
#include<stdio.h>
int main()
{
    int base1, base2, altezza1, altezza2, area1, area2;

    puts("Inserisci base e altezza del rettangolo 1:");
    scanf("%d %d", &base1, &altezza1);
    area1 = base1 * altezza1;
    printf("\nArea del rettangolo 1:%d\n", area1);
    
    puts("\nInserisci base e altezza del rettangolo 2:");
    scanf("%d %d", &base2, &altezza2);
    area2 = base2 * altezza2;
    printf("\nArea del rettangolo 2:%d\n", area2);
    

    if (area1>area2)
    {
        puts("\nArea del rettangolo 1 maggiore del rettangolo 2");
    }
    else{
        puts("\nArea del rettangolo 1 minore del rettangolo 2");
    }


}
    
    //SESTO ESERCIZIO
#include<stdio.h>
int main(void)
{
    int a, b, c;
    int delta;

    puts("Inserisci costanti e valori noti:");
    scanf("%d %d %d", &a, &b, &c);

    if (delta != 0){
        delta = (b*b)-(4*a*c);
    if (delta > 0)
        puts("Ha due soluzioni");
    
    else if (delta < 0)
        puts("Non ha soluzioni");
        else 
         puts("Ha una soluzione");}
    else
    puts("Non è un'equazione");
}


//SETTIMO ESERCIZIO (crea una calcolatrice)

#include<stdio.h>
int main(void)
{
    int scelta;
    float op1, op2; //operando 1 e 2
    //float risultato;
    
    puts("Inserisci i due operandi:");
    scanf("%f %f", &op1, &op2);
    
    puts("\nFai una scelta:\n1. Somma\n2. Differenza\n3. Divisione\n4. Moltiplicazione");
    scanf("%d", &scelta);

    switch(scelta){
        case 1:
        printf("La somma risulta:%.3f", op1 + op2);
            break;
        case 2:
            printf("La differenza risulta:%.3f", op1 - op2);
            break;
        case 3:
        if ((op1 == 0 && op2 ==0) || op2 == 0)
            puts("La divisione non ha risultato.");
            else
            printf("La divisione riuslta:%.3f", op1 / op2);
            
            break;
        case 4:
            printf("Il prodotto riuslta:%.3f", op1 * op2);
            break;
        default:
            puts("Scelta non corretta");
                break;
    }

}

