//differenza tra 2 matrici

#include <stdio.h>
#define M 8
#define N 8   

int main() 
{ 
int A[M][N], B[M][N], C[M][N];
int n,m,i,j;

printf("Dammi il numero di righe: ");
scanf("%d", &m);

printf("Dammi il numero di colonne: ");
scanf("%d", &n);

printf("\nInseriamo i dati nella prima matrice \n");
for (i=0;i<m;i++)
   for(j=0;j<n;j++) {
       printf("Inserisci elemento di riga %d e colonna %d: ", i, j);
       scanf("%d", &A[i][j]);
    }

 printf("\nInseriamo i dati nella seconda matrice \n");
 for (i=0;i<m;i++)
    for(j=0;j<n;j++) {
        printf("Inserisci elemento di riga %d e colonna %d: ", i, j);
        scanf("%d", &B[i][j]);
    }  
 
 printf("\nStampiamo i dati della matrice \n");
 for (i=0;i<m;i++) {
    printf("\n");
    for(j=0;j<n;j++) 
        printf("\t%d", A[i][j]);                
      }

printf("\nStampiamo i dati della matrice \n");
for (i=0;i<m;i++) {
    printf("\n");
    for(j=0;j<n;j++) 
        printf("\t%d", B[i][j]);                
        }

for (i=0;i<m;i++) {
   for (j=0;j<n;j++) 
       C[i][j]=A[i][j] - B[i][j];               
        }

 printf("\nStampiamo i dati della matrice differenza\n");
 for (i=0;i<m;i++) {
    printf("\n");
    for(j=0;j<n;j++) 
        printf("\t%d", C[i][j]);                
        }
        
return 0;

}

