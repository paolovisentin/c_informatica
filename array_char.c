#include<stdio.h>
#define BUF_SIZE 8

int main(){
    char buffer [BUF_SIZE];
    int i;

    for(i=0; i<BUF_SIZE * 2; i++){
            buffer[i % BUF_SIZE] = 'a' + i;
    }

    for(i=0; i<BUF_SIZE; i++){
        printf("buffer[%d]: %c\n", i, buffer[i]);
    }
    return 0;
}
