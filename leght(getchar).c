//Determina la lunghezza del messaggio
//conta anche gli spazi bianchi.

#include<stdio.h>
int main(){
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar();
    while (ch != '\n')
    {
        len++;
        ch = getchar();
    }

printf("Your message was %d character(s) long.\n", len);

return 0;
    
}

//oppure

#include<stdio.h>
int main(){
    int len = 0;

    printf("Enter a message: ");
    while (getchar() != '\n')
        len++;
    printf("Your message was %d character(s) long.\n", len);

return 0;
    
}

