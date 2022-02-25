#include<stdio.h>
int main(){
    int N, num, max, min;

    printf("Quanti numeri vuoi inserire?: \n");
    scanf("%d", &N);

    if(N<=0)
        printf("Errore!\n");
    else
    {
        printf("Inserisci un numero:\n ");
        scanf("%d", &num);
        N--;
        max=num;
        min=num;
        while(N>0){

         printf("Inserisci un numero:\n ");
         scanf("%d", &num);
        if (num>max)
         max=num;
            else{
                if(num<min)
                    min=num;
            }
            N--;
        }
        
    
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    
}