#include<stdio.h>
int main(void){
    const char *colors[] = { "black", "white", "red", "green", "blue", NULL };

    int i;
    for(i = 0; colors[i]; i++){
        printf("colors[%d]: %s\n", i, colors[i]);
    }

    return 0;
}