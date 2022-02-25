#include<stdio.h>

int main()
{
    int a,b;
    
    puts("Inserisci due valori interi:");
    scanf("%d %d", &a, &b);
    printf("\n");
    printf("a:%d\n", a);
    printf("b:%d\n", b);
    printf("\n");
    
    _Bool c;
    
    c = a>b;
    printf("a è maggiore di b?%d\n",c);
    c = a==b;
    printf("a è uguale a b?%d\n",c);
    c = a<b;
    printf("a è minore di b?%d\n",c);

}