#include<stdio.h>
#define N_VALUES 10

int main(){
    int numbers[N_VALUES];
    int i;

    for(i=0; i<N_VALUES; i++){
        numbers[i]=0;
        for(i=0; i<N_VALUES;i++){
            printf("Inserisci n[%d]: ", i);
            scanf("%d", &numbers[i]);
        }

        for(i=0; i<N_VALUES; i++)
            printf("n[%d]: %d\n", i, numbers[i]);
        
        return 0;
    }
    
}