#include<stdio.h>
int conversioneora(int);
int conversioneminuti(int);

int main(){
    int ora, minuti;

    printf("Inserisci orario (formato 24h): ");
    scanf("%d:%d", &ora, &minuti);

    printf("24 hours: %d:%d\n", ora, minuti);
    printf("12 hours: %d:%d\n", conversioneora(ora), minuti);
}

int conversioneora (int ora){
    int ora12;
    if (ora==01)
        ora12=ora;
    else if (ora==02)
        ora12=ora;
    else if (ora==03)
        ora12=ora;
    else if (ora==04)
        ora12=ora;
    else if (ora==05)
        ora12=ora;
    else if (ora==06)
        ora12=ora;
    else if (ora==07)
        ora12=ora;
    else if (ora==8)
        ora12=ora;
    else if (ora==9)
        ora12=ora;
    else if (ora==10)
        ora12=ora;
    else if (ora==11)
        ora12=ora;
    else if (ora==12)
        ora12=ora;
    else if (ora==13)
        ora12=1;
    else if (ora==14)
        ora12=2;
    else if (ora==15)
        ora12=3;
    else if (ora==16)
        ora12=4;
    else if (ora==17)
        ora12=5;
    else if (ora==18)
        ora12=6;
    else if (ora==19)
        ora12=7;
    else if (ora==20)
        ora12=8;
    else if (ora==21)
        ora12=9;
    else if (ora==22)
        ora12=10;
    else if (ora==23)
        ora12=11;
    else if (ora==24)
        ora12=00;
     else 
     printf("Errore.");
     
          
     
    
    return ora12;
}
