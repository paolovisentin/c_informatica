#include<stdio.h>

void zero_array(double values[], int size){

    int i;

    for(i=0; i < size; i++ )
        values[i] = 0.0;
}

void print_array(double values[], int size){

    int i;

    printf("[");
    for(i = 0; i < size; i++){
        printf("%g%s", values[i], (i < size-1) ? "," : "");
    }
    printf(" ]\n");
}

int main(void)
{
    
    double distances[] = { 121.0, 216.4, 5.2, 81.1, 234.5, 65.8 };

    int n_els = (int) (sizeof(distances) / sizeof(distances[0]));
    print_array(distances, n_els);
    zero_array(distances, n_els);
    print_array(distances, n_els);
}