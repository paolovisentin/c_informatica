#include<stdio.h>
#include<ctype.h>

int main(){
    int ch;

    while(1){
        ch = getchar();
        if((ch == EOF) || (ch == '\n'));{
        break;
          putchar(toupper(ch));
          }
    putchar('\n');

return 0;
}
}