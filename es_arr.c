#include<stdio.h>

int main() {
    int vett[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &vett[i]);
    }

    printf("\nIl vettore e' il seguente: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vett[i]);
    }

    printf("\nIl vettore al contrario e' il seguente: ");
    for (i = 9; i >= 0; i--) {
        printf("%d ", vett[i]);
    }
    return 0;
}