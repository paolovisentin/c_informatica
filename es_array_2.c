#include<stdio.h>
#include<float.h>
double find_min(double values[], int size);

double find_min(double values[], int size){
    int i;
    double min = DBL_MAX;
    for(i=0; i < size; i++){
        if(values[i] < min){
            min = values[i];
        }
    }
    return min;
}
int main(void)
{
    double distances[] = { 121.0, 216.4, 5.2, 81.1, 234.5, 65.8 };

    double min = find_min(distances, sizeof(distances) / sizeof(distances[0]));
        printf("min: %g\n", min);

}