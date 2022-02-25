#include<stdio.h>
void print_ints(int *values, int n);

int main(){

    int n;

    printf("Inserire la dimensione dell'array: ");
    scanf("%d", &n);

    int values[n];

    for(int i = 0;  i < n; i++){
        printf("Inserire elemento n° %d: ", i);
        scanf("%d", &values[i]);
    }
    
    printf("\n");
    
    print_ints(values, n);

    
}

void print_ints(int *values, int n){
    for(int i = 0; i < n; i++){
        printf("Elemento n° %d: %d\n ", i, values[i]);
    }

    
}