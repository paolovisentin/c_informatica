#include<stdio.h>
int main()
{
    int num;

    puts("Inserisci numero:");
    scanf("%d", &num);

    switch(num){
        case 1:
            puts("Hai inserito 1.");
            break;
        case 2:
            puts("Hai inserito 2.");
            break;
        case 3: 
            puts("Hai inserito 3.");
            break;
        default:
            puts("Non hai inserito 1,2 o 3.");
            break;
    }

}



//Raggruppamento casi uguali

#include<stdio.h>
int main()
{
    int num;

    puts("Inserisci numero:");
    scanf("%d", &num);

    switch(num){
        case 1:
        case 2:
        case 3: 
            puts("Hai inserito un numero dall'1 al 3.");
            break;
        default:
            puts("Non hai inserito 1,2 o 3.");
            break;
    }

}

