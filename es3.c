#include<stdio.h>

long long unsigned fattoriale (int);

int main(){

    int N;

    puts("Inserisci numero: ");
    do
    scanf("%d", &N);
    while(N < 1);

    while (N >= 0)
    {
        printf("%d = %llu\n", N, fattoriale(N));
        N--;
    }
}

long long unsigned fattoriale (int n){
    
    if (n <= 1){
        return 1;
    }
    return n*fattoriale(n-1);
}