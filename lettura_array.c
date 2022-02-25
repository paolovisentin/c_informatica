#include<stdio.h>
int main()
{
    int dim, val;
    int array[dim];

    printf("Inserisci dimensione dell'array: ");
    scanf("%d", &dim);

    for(int i = 0; i < dim; i++){
        printf("Inserisci valore: ");
        scanf("%d", &array[i]);
        
    }

    for(int i = 0; i < dim; i++){
        printf("%d", array[i]);
    }
}