#include<stdio.h>
int main(){
    int num;

    printf("Inserisci numero: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 9)
        printf("Il numero ha 1 cifra.");
    else if (num >= 10 && num <= 99)
        printf("Il numero ha 2 cifre");
    else
    printf("Errore.");

    return 0;
}