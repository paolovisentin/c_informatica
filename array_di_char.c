#include<stdio.h>
int main()
{
    char array[50];

    printf("Cosa vuoi scrivere?\n");
    scanf("%s", array);
    
    printf("Hai scritto: '%s'", array);

    return 0;
}