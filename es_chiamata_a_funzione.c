#include<stdio.h>
double approx_pi_slow(long n)
{
    double pi_fourth = 0.0;
    long i;

    for(i = 0; i < n; i++ ){
        pi_fourth += ((i % 2) ? -1.0 : 1.0) / (2.0 * i + 1.0);

    }
    return pi_fourth * 4.0;
}

int main(void){
    long n1 = 200;
    printf("%g\n", approx_pi_slow(n1));

    long n2 = 1000000;
    printf("%g\n", approx_pi_slow(n2));

    return 0;

}

