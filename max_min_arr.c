#include<stdio.h>
int main(){
    int arr[10];
    int min, max;

    puts("Inserisci valore: ");
    for(int i=0; i<10; i++){
        printf("Valore n°%d: ", i);
        scanf("%d", &arr[i]);
    }

    max=arr[0];
    min=arr[0];

    for(int i=0; i<10; i++){
        if(arr[i]>max)
        max=arr[i];
    }
    
    for(int i=0; i<10; i++){
        
        if(arr[i]<min)
        min=arr[i];
    }

    printf("MIN: %d\n", min);
    printf("MAX: %d", max);

    return 0;
}