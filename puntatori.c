#include<stdio.h>
int main(){
    int i=9;
    char c='a';
    
    int *pi;
    char *pc;
    
    printf("Puntatore a char: %lu byte - puntatore ad int: %lu byte\n\n", sizeof(char*), sizeof(int*));
    
    pi = &i;
    pc = &c;
    
    printf("indirizzo di memoria di i: %p - indirizzo di memoria di c: %p\n\n", pi, pc);
    printf("valore di i: %d - valore di c: %c\n\n", *pi, *pc);
    
    return 0;
}