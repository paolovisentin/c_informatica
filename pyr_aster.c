#include<stdio.h>
int main()
{
    int h;
    printf("Inserisci altezza piramide: ");
    scanf("%d", &h);

    for (int r = 1; r <= h; r++) {   

        for (int i = 1; i <= h - r; i++)
            printf(" ");

    for (int i = 1; i <= r * 2 - 1; i++)
        printf("*");

    printf("\n");

  }
}