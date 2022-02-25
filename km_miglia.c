#include<stdio.h>
int main(){
    int miglia;
    const float kconverter = 0.62137119;
    
    printf("Km\t");
    printf("Miglia\n");

    for (int km=0; km<=200; km=km+10){
         printf("%d\t", km);
         printf("%f\n", km*kconverter);
         
    }
}