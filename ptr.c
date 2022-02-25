#include<stdio.h>
#include<math.h>

void cartesian2polar (double x, double y, double *r, double *theta)
{
    *r = sqrt(x*x + y*y);
    *theta = atan2(y, x); //atan2 -->arcotangente
}

void polar2cartesian(double r, double theta, double *x, double *y)
{
    *x = r * cos(theta);
    *y = r * sin(theta);
}

int main()
{
    double r, theta;
    cartesian2polar(3, 4, &r, &theta);
    printf("r: %g theta: %g\n",r,theta);

    double x, y;
    polar2cartesian(r, theta, &x, &y);
    printf("x: %g y:%g\n", x, y);

    return 0;

}

/*quando mando con la chiamata a funzione una variabile la quale dovrà essere "lavorata"
   e dovrà risultare un certo valore mando l'indirizzo(quindi con il puntatore)*/