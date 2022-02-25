#include<stdio.h>
#include<math.h>

void equazione (int, int, int);
float risolvi1 (int,int,int);
float risolvi2 (int,int,int);


int main(){
    int a, b, c;

    puts("Inserisci il coefficente di x alla seconda: ");
    scanf("%d", &a);

    puts("Inserisci il coefficente di x: ");
    scanf("%d", &b);

    puts("Inserisci il termine noto: ");
    scanf("%d", &c);

    equazione(a, b, c);
}


void equazione(int a, int b, int c)
{
    if(a == 0){
        puts("Non è un'equazione di secondo grado.");
        return 0;
        }

    int delta;

    delta = b*b - 4*a*c;

    if(delta>0){
        puts("Ci sono due punti di intersezione.");
        printf("x1 vale: %.2f\n", risolvi1(b, delta, a));
        printf("x2 vale: %.2f", risolvi2(b, delta, a));}
    else if (delta == 0){
    puts("C'è un punto di intersezione.");
    printf("x vale: %.2f", risolvi1(b, delta, a));
    }
    else
    puts("Non ci sono punti di intersezione.");

}


float risolvi1 (int b, int delta, int a)
{
    float x;

    x = (float) -b + sqrt(delta);
    x = (float) x / (2*a);

    return x;
}


float risolvi2 (int b, int delta, int a){
    float x;

    x = (float) -b - sqrt(delta);
    x = (float) x / (2*a);

    return x;
}