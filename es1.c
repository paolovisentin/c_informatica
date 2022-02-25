#include<stdio.h>

void asterischi (int);
int main(void)
{
    int N, num;

    puts("Inserisci un valore N: ");
    
    do{
        scanf("%d", &N);
    }while (N<1);
    
        for(int i=0; i<N; i++){
        puts("\nInserisci un numero: ");
            scanf("%d", &num);

            asterischi(num);
    }
}
    
    void asterischi (int numero){   
        if(numero <= 0){
            printf("impossibile stampare asterischi.");
            return;
            
        }
    
    for(int i=0; i < numero; i++){
        printf("%c ", '*');
    }
    return;
    }

       

