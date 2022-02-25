#include<stdio.h>
#define MAX_COLOR_NAME_LEN 5

int main(void){
    char colors[][MAX_COLOR_NAME_LEN + 1] = { "black", "white", "red", "green", "blue", ""};

    int i;
    for(i = 0; *colors[i]; i++){
        printf("color[%d]: %s\n", i, colors[i]);
    } 
    return 0;
}