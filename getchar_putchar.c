#include<stdio.h>
#include<limits.h>

int main(){
    int ch;

    while (1){
        ch = getchar();
        if((ch==EOF) || (ch == '\n'));
            break;
            putchar (ch);    //printf("%c", (char)ch);
    }
    putchar('\n');    //printf("\n");
    return 0;

}