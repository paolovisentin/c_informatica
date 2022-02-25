#include <stdio.h>
#define NUM_VAL 5

int main() 
{ 
    int vettore[NUM_VAL];
     int i, min,max; 

     for(int i = 0; i < NUM_VAL; i++)
     {
         printf("Inserisci valore n° %d: ", i);
         scanf("%d", &vettore[i]);
     }
     for (i=0;i<5;i++) 
     { 
         if (i==0) { 
         min=vettore[i]; 
         max=vettore[i]; 
         } 
         
         if (vettore[i]>max) 
         max=vettore[i];
          
          if(vettore[i]<min)
          min=vettore[i];
     }
     printf("\n");
        printf("Minimo = %d \n", min ); 
        printf("Massimo = %d \n", max ); 
return 0; 
}