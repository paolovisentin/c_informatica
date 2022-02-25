#include<stdio.h>
#include<string.h>

int main() {
    char vettore[20];
    int lung;

    printf("Inserisci numero: ");
    scanf("%s", vettore);

    lung = strlen(vettore);
    
    for(int i=0; i<lung; i++)
    {
        if(vettore[i]=='A'||vettore[i]=='B'||vettore[i]=='C')
            printf("2");
        if(vettore[i]=='D'||vettore[i]=='E'||vettore[i]=='F')
            printf("3");
        if(vettore[i]=='G'||vettore[i]=='H'||vettore[i]=='I')
            printf("4");
        if(vettore[i]=='J'||vettore[i]=='K'||vettore[i]=='L')
            printf("5");
        if(vettore[i]=='M'||vettore[i]=='N'||vettore[i]=='O')
            printf("6");
        if(vettore[i]=='P'||vettore[i]=='R'||vettore[i]=='S')
            printf("7");
        if(vettore[i]=='T'||vettore[i]=='U'||vettore[i]=='V')
            printf("8");
        if(vettore[i]=='W'||vettore[i]=='X'||vettore[i]=='Y')
            printf("9");
    }
    return 0;
}