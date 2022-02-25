#include<stdio.h>
int main(){
    int ch;

    while(1){
        ch=getchar();
        if((ch==EOF) || (ch == '\n'))
            break;
            putschar(ch);
    }
    putchar('\n');
    return 0;
}