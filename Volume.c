//calcola volume 

#include <stdio.h>
int main ()
{
    int height, lenght, width, volume, weight;

    height = 8;
    lenght = 12;
    width = 10;
    volume = height*lenght*width;
    weight = (volume+165) / 166;

    printf("Dimension: %dx%dx%d \n", lenght, width, height);
    printf("-----------------\n");
    printf("Dimension lenght: %d\n", lenght);
    printf("Dimension width: %d\n", width);
    printf("Dimension height: %d\n", height);
    printf("-----------------\n");
    printf("Volume: %d\n", volume);
}
