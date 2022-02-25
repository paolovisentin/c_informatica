#include<stdio.h>
#include<math.h>

int solve2(double a, double b, double c, double *x1_p, double *x2_p);

int main(){
       
    double a, b, c;
    double x1_p;
    double x2_p;

    printf("Inserisci a: ");
    scanf("%lf", &a);
    printf("Inserisci b: ");
    scanf("%lf", &b);
    printf("Inserisci c: ");
    scanf("%lf", &c);
    
    int delta = solve2(a, b, c, &x1_p, &x2_p);

    if(delta < 0)
        printf("Nessuna radice");
    
    if(delta == 0){
        printf("Una radice: %.2f", x1_p);
    }
    if(delta > 0){
        printf("Due radici: x1: %.2f, x2: %.2f", x1_p, x2_p);
    }

}


int solve2(double a, double b, double c, double *x1_p, double *x2_p){

    double delta= (b*b) - 4*a*c;
     
     

    if(delta == 0){
         int rad = sqrt(delta);
         
        *x1_p = (-b+rad)/(2*a);
       
    }
    
    if(delta > 0){
        *x1_p = (-b+sqrt(delta))/(2*a);
        *x2_p = (-b-sqrt(delta))/(2*a);
        
    }

     return delta;
}