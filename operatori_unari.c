#include<stdio.h>
int main()
{
    int x,y,z = 3;

    x = ++z; 
    printf("Valore di x:%d\n", x);
    printf("Valore di z:%d\n", z);

    z = 3;

    y = z++;
    printf("Valore di y:%d\n", y);
    printf("Valore di z:%d\n", z);


}