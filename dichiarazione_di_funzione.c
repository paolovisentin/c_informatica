#include<stdio.h>
#include<math.h>
double sum_of_squares(double x, double y);
void greet_the_world(void);

int main(void)
{
    greet_the_world();

    printf("Lenght of <2, 1>: %g\n", sqrt(sum_of_squares(2.0, 1.0)));
}

double sum_of_squares(double x, double y)
{
    return x*x + y*y;
}

void greet_the_world(void)
{
    printf("Hello, world!\n");
}