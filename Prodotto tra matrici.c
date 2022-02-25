//prodotto tra 2 matrici

#include <stdio.h>
#define A 3
#define P 5    
#define M 4
int a[M][A];
int b[A][P];
int c[M][P];

int main() 

{
    
int i,j,k;

printf("\nInseriamo i dati nella matrice \n");
for (i=0;i<M;i++)
    for (j=0;j<A;j++) {
        printf("Inserisci elemento di riga %d e colonna %d: ", i, j);
        scanf("%d", &a[i][j]);
    }

    printf("\nInseriamo i dati nella seconda matrice \n");
 for (i=0;i<A;i++)
    for (j=0;j<P;j++) {
        printf("Inserisci elemento di riga %d e colonna %d: ", i, j);
        scanf("%d", &b[i][j]);
    }

    printf("\nCalcoliamo il prodotto \n");
 for (i=0;i<M;i++) 
        for(j=0;j<P;j++) {
            c[i][j]=0;
            for(k=0;k<A;k++)    
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }

    printf("\nStampiamo i dati della prima matrice \n");
 for (i=0;i<M;i++) {
    printf("\n");
    for(j=0;j<A;j++) 
        printf("\t%d", a[i][j]);                
    }

    printf("\nStampiamo i dati della seconda matrice \n");
 for (i=0;i<A;i++) {
    printf("\n");
    for(j=0;j<P;j++) 
        printf("\t%d", b[i][j]);                
    }

    printf("\nStampiamo i dati della matrice prodotto \n");
for (i=0;i<M;i++) {
    printf("\n");
    for(j=0;j<P;j++) 
        printf("\t%d", c[i][j]);                
    }    
    return 0;

}  