//PRIMO ESEMPIO

#include<stdio.h>

int main(void)
{
    enum mesi {
        GEN, FEB, MAR,
        APR, MAG, GIU,
        LUG, AGO, SET,
        OTT, NOV, DIC
    };
    printf("%s %d\n", "Gennaio:", GEN);
    printf("%s %d\n", "Dicembre:", DIC);
}



//SECONDO ESEMPIO

#include<stdio.h>

int main(void)
{
    enum mesi {
        GEN = 14, FEB = 54, MAR = 42,
        APR = 10, MAG = 45, GIU = 22,
        LUG = 6, AGO = 63, SET = 34,
        OTT = 4, NOV = 2, DIC = 0
    };
    printf("%s %d\n", "Gennaio:", GEN);
    printf("%s %d\n", "Dicembre:", DIC);
}