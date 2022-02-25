#include<stdio.h>

int main(){
    int dim, max;
    
    printf("Inserisci dimensione: ");
    scanf("%d", &dim);
    
     int array[dim];

    for(int i = 0; i < dim; i++){
        printf("Inserisci valori: ");
        scanf("%d", &array[i]);
    }
      
      for(int i = 0; i < dim; i++){
          
        if(i==0)
            max=array[i];
            
        if(array[i] > max)
            max = array[i];
    }
    printf("Max: %d", max);

    return 0;
}

