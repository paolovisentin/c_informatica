#include<stdio.h>
#include<ctype.h>
int main(){
    int ch, lenght=0;

    while(ch!='\n'){
        ch=getchar();
        putchar(toupper(ch));
        lenght++;
    }
    printf("%d", lenght);
    return 0;
}